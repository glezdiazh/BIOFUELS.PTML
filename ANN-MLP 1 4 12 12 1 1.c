/* ------------------------------------------------------------------------- */
/*
  Title: NNCode, Neural Network execution code.
  Automatically generated by SNN, Thu Apr 20 09:33:07 2023


  License Agreement:
  -----------------

  Copyright StatSoft Inc., 2000-2001, all rights reserved.
  This source code (Source Code Generated by STATISTICA Neural Networks,
  referred to as "CG" below) is owned by StatSoft Inc. and is protected
  by United States Copyright laws and international treaty provisions. You
  shall treat the CG like any copyrighted material.
  The CG may not be redistributed or used except in accordance with the
  conditions below.

  The licensee is granted a license to incorporate the CG as embedded
  software in their own hardware and software products, and to distribute an
  unlimited number of such embedded copies as part of this license subject to
  obtaining prior written consent from StatSoft Inc., and subject to
  the conditions listed below.

  Prior consent is required so that StatSoft Inc. can ensure that license
  conditions are not breached, and can track legitimate use of the CG. Consent
  shall not be refused unless StatSoft Inc. reasonably believes that a
  breach of license conditions will occur. Consent shall usually be granted
  within five working days of the request, providing that sufficient details of
  the intended use are given.

  Requests should be sent to SNN Project Director, StatSoft, Inc.,
  2300 East 14th Street, Tulsa OK 74104 USA, FAX: 918-749-2217,
  E-Mail: info@statsoft.com.

  The licensee may modify the CG as they see fit for embedded use, including
  recoding into alternative programming languages, altering the neural network
  architecture and weights, and otherwise modifying the CG, provided that they
  keep intact this copyright and license notice.

  The licensee may distribute products including the compiled version of CG.

  The licensee shall not:-
    Sublicense, rent, lease, or assign any portion of the CG to third parties.
    Allow compiled versions of the CG to be incorporated in products owned
    by third parties.
    Allow access to the CG to third parties.
    Use (implicitly or explicitly) any reference to StatSoft, Inc., STATISTICA,
    STATISTICA Neural Networks, or any trade names used by StatSoft, Inc.
    to describe, promote, or reference products in which CG is used, or which
    benefit from CG.

  Except as expressly stated herein, the CG is provided "AS IS." The licensee
  shall be entirely responsible for the selection of the CG and for the
  installation, integration, use of, and results obtained from, the CG.
  In particular, but without limitation, attention is drawn to the issue of
  "limited numeric accuracy," which implies that results may not be identical to
  those when executing the same network in STATISTICA Neural Networks or through
  its Application Programming Interface.

  All other warranties or conditions, either express or implied, including but
  not limited to implied warranties of merchantability or fitness for a
  particular purpose, with respect to the CG and written information
  accompanying the CG, are excluded from the license.

  No liability for Consequential Damages. To the maximum extent permitted by
  applicable law, in no event shall StatSoft Inc.,
  or the vendor be liable for any damages whatsoever
  (including, without limitation, damages for loss of profits,
  business interruption, loss of information, or any other pecuniary loss)
  arising out of the use or inability to use this product,
  even if the vendor has been advised of the possibility of
  such damages.

  This license and your right to use the CG shall terminate automatically
  if StatSoft, Inc. determines that you violate any part of the agreement
  or if you violate any part of this agreement without the knowledge of
  StatSoft, Inc. In the event of termination, you shall immediately destroy
  all copies of the CG.

  This agreement constitutes the entire agreement between you and StatSoft Inc.,
  and supersedes any prior agreement concerning the CG. It shall
  not be modified except by written agreement dated subsequent to the date of
  this agreement signed by an authorized representative of StatSoft Inc.
  StatSoft Inc. shall not be bound by any provision of any purchase order,
  confirmation, correspondence, or otherwise, unless StatSoft Inc.
  specifically agrees to the provision in writing.

  This agreement shall be considered as a contract made in the United States
  of America and according to United States Law,
  subject to the exclusive jurisdiction of the United States Courts.
*/
/* standard includes. math.h needed for exp() function. */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#ifndef FALSE
#define FALSE 0
#define TRUE 1
#endif

#define MENUCODE -999


static double NNCode01Thresholds[] =
{

/* layer 1 */
0.79636915244539475, 0.76360930497976887, 1.1794616599936385, 0.3893522839928884,
1.1742449289525549, -0.55617838039904988, 0.95226464046710368, -0.18383376408115504,
1.2831786281819368, -0.44996613224878945, 0.88387978962443225, 0.64690438796029648,

/* layer 2 */
-0.1955880728026744, 0.5614927443497838, 0.11149770229158928, 0.8026869435090872,
-0.50509136715910963, -0.57352485589600821, -0.82948350897325751, 0.26339144519700985,
0.11662058160678966, 0.78992957363344274, -0.071729990339482741, 0.18570712923194696,

/* layer 3 */
-0.14618073305945109

};

static double NNCode01Weights[] =
{

/* layer 1 */
-0.038306621580229579, -0.016482829911911634, 0.038258947122451675, -0.082610176794697704,
0.05919187695352951, 0.061427670115605321, -0.077233756711622539, -0.014050251170747432,
-0.020211774087942627, -0.026695477486230197, 0.048614192419532937, -0.047769271628911883,
0.13740444969348048, -0.065273390135901291, -0.11662510492428475, -0.087329872858608104,
-0.069539387153230034, 0.023681127725439493, 0.053541941515162735, 0.049308934041811733,
0.019877613528763508, -0.02712000704531849, 0.051907823566797497, 0.22995328637074341,
0.032212400207125631, 0.11276320695113035, 0.012016106425104846, 0.084156095863993849,
-0.15623632441707772, 0.050637672495878527, 0.19100930352691309, 0.0021347020453764409,
0.021294776923815005, 0.14206172810586815, -0.011172119105014467, -0.038530986980634244,
0.1202343602697588, -0.026501371463774299, -0.090957675131562235, 0.0487922963772007,
-0.0010733272183548461, 0.42780084142903957, 0.0037744515836477264, -0.068364611053336105,
0.013023516257420058, 0.029997546525996489, -0.029132843815117142, -0.24531829519992851,

/* layer 2 */
2.0654041722412049, -1.5043799317243154, -1.5992247841543845, 1.9143458438853975,
1.8543044118937195, 1.4824519532725184, 1.9065239748832219, -1.0538305821852887,
1.6969532226119945, 0.025386434609581177, -1.7841508490590117, 0.053537017613964774,
1.8786287328672593, 1.4970630042426747, 1.9929075703911807, -1.5627734636207096,
1.7881844329896641, -1.1844600938409129, -1.790290772292918, 0.57493219702033849,
1.9765086296854961, 0.0074417320161606765, 1.9466914894362353, 0.022409137808563177,
2.2578736558123715, -1.3314308427822694, 2.4885954897832283, -1.4441614541641419,
-1.3278097227620955, -0.63728099972327457, -1.1826488678156, 1.1748395098989663,
-1.3760290427514521, -0.0048576851648261697, 2.4819272980955427, 0.095649794537069593,
-1.8621021381937957, -1.6614193512997737, 1.8549969297790543, 1.7013523899031124,
1.6814879049498435, -1.535184326225487, -1.8628513228466588, 0.51585619588449927,
1.8866672219140732, -0.00062281724490094947, 1.8457428357101091, -0.27370292721267969,
1.8321270749540917, 1.9634858747932911, -1.5543246795696817, 1.7768180891222716,
1.8963861257164818, 1.5731114565352819, 1.3705127280009228, -1.2249590233610226,
-1.8061085832730543, -0.0021800443044714549, -1.715383191221594, -0.047921466153311082,
-1.9109904100576549, 1.866470314492088, -1.8822535443287141, 1.8338724617167637,
1.9348826630241083, 1.5863386589337127, -1.728708852550809, 1.3134370404838416,
1.973704807126049, -0.0048199337213348636, 1.7593863630880573, -0.036003799766868003,
-1.8971719353655572, 1.8208008686816664, 1.7969414333576126, 1.8075593206248581,
1.7448708231048318, -1.478710061679563, 1.6418861720247593, -0.94224301660979248,
-1.8118868406612121, 0.0048184447031431338, 1.9016094631331861, -0.50058436531016226,
1.5967835652101707, 1.8486611949736194, -1.8257603770180715, 1.9081611419098001,
1.8840758884553643, -0.67558983707206821, -1.7945051009221362, -0.8753447353281778,
-1.7870668705206161, -0.020970793333739888, 1.8830340709000504, 0.077022667825436653,
1.8544893599520094, 1.8903288326338179, -1.6855448398172657, 1.4644114704992288,
1.674973537199274, 1.5564007073911563, -1.4806648731190621, -0.97655044668935409,
-1.8736940596083975, 0.005590192031285272, 1.7650782849913662, 0.031745953244028458,
1.9449946196314383, 1.9160324434528526, 1.6878136001957746, 1.7246635272941158,
-1.936165134377084, -1.3201260442747682, 1.7285240490902147, -1.0867291622958,
1.9498191864511085, -0.0064526235034376104, -1.7693962494762565, -0.018304730489621363,
-1.8794939421376662, 1.9044117920069219, 1.9797768079070066, -1.5643316463315577,
-1.8510326891756996, -1.1692391991564175, 1.8786253459401021, -0.864246588057759,
1.9795531113361808, 0.032477294063581075, 1.9343183086070019, 0.019579751375954857,
1.8003176748589431, 1.8079623651106165, -1.7955782846136412, 1.7300172126489768,
1.5811140064561988, -1.4940906832415932, 1.8746085865796771, 0.77155977213320859,
-1.1509831391987322, -0.013439547442904281, -1.845392000478713, -0.01462127607786068,

/* layer 3 */
1.5421206304366746, -2.1544240181116918, 1.3579863011713604, 1.3515431290747326,
1.4642631367479939, -1.9501089498415891, 1.4755902468919342, -2.1434996315682122,
1.3496012024450081, -1.9455133537904874, -1.9913613046327117, 1.180415236797635

};

static double NNCode01Acts[58];

/* ---------------------------------------------------------- */
/*
  NNCode01Run - run neural network NNCode01

  inputs - the input variables of this network.
  The variable names are listed below, together with each
  variable's offset in the data set at the time code was
  generated (if the variable is then available).
  Variable (Offset)
  c0 = Prop.(Unit) (0)

*/
/* ---------------------------------------------------------- */

void NNCode01Run( double inputs[], double outputs[], int outputType )
{
  int i, j, k, u;
  double *w = NNCode01Weights, *t = NNCode01Thresholds;

  /* Process inputs - apply pre-processing to each input in turn,
   * storing results in the neuron activations array.
   */

  /* One-of-N nominal pre-processing */
  if ( inputs[0] == 0 )
  {
    double missingValues[] = { 0.44159544159544162, 0.014245014245014245, 0.42924976258309594, 0.11490978157644824 };
    for ( k=0; k < 4; ++k )
      NNCode01Acts[0+k] = missingValues[k];
  }
  else
  {
    for ( k=0; k < 4; ++k )
      NNCode01Acts[0+k] = 0;
    NNCode01Acts[0+inputs[0]-1] = 1;
  }

  /*
   * Process layer 1.
   */

  /* For each unit in turn */
  for ( u=0; u < 12; ++u )
  {
    /*
     * First, calculate post-synaptic potentials, storing
     * these in the NNCode01Acts array.
     */

    /* Initialise hidden unit activation to zero */
    NNCode01Acts[4+u] = 0.0;

    /* Accumulate weighted sum from inputs */
    for ( i=0; i < 4; ++i )
      NNCode01Acts[4+u] += *w++ * NNCode01Acts[0+i];

    /* Subtract threshold */
    NNCode01Acts[4+u] -= *t++;

    /* Now apply the hyperbolic activation function, ( e^x - e^-x ) / ( e^x + e^-x ).
     * Deal with overflow and underflow
     */
    if ( NNCode01Acts[4+u] > 100.0 )
       NNCode01Acts[4+u] = 1.0;
    else if ( NNCode01Acts[4+u] < -100.0 )
      NNCode01Acts[4+u] = -1.0;
    else
    {
      double e1 = exp( NNCode01Acts[4+u] ), e2 = exp( -NNCode01Acts[4+u] );
      NNCode01Acts[4+u] = ( e1 - e2 ) / ( e1 + e2 );
    }
  }

  /*
   * Process layer 2.
   */

  /* For each unit in turn */
  for ( u=0; u < 12; ++u )
  {
    /*
     * First, calculate post-synaptic potentials, storing
     * these in the NNCode01Acts array.
     */

    /* Initialise hidden unit activation to zero */
    NNCode01Acts[16+u] = 0.0;

    /* Accumulate weighted sum from inputs */
    for ( i=0; i < 12; ++i )
      NNCode01Acts[16+u] += *w++ * NNCode01Acts[4+i];

    /* Subtract threshold */
    NNCode01Acts[16+u] -= *t++;

    /* Now apply the hyperbolic activation function, ( e^x - e^-x ) / ( e^x + e^-x ).
     * Deal with overflow and underflow
     */
    if ( NNCode01Acts[16+u] > 100.0 )
       NNCode01Acts[16+u] = 1.0;
    else if ( NNCode01Acts[16+u] < -100.0 )
      NNCode01Acts[16+u] = -1.0;
    else
    {
      double e1 = exp( NNCode01Acts[16+u] ), e2 = exp( -NNCode01Acts[16+u] );
      NNCode01Acts[16+u] = ( e1 - e2 ) / ( e1 + e2 );
    }
  }

  /*
   * Process layer 3.
   */

  /* For each unit in turn */
  for ( u=0; u < 1; ++u )
  {
    /*
     * First, calculate post-synaptic potentials, storing
     * these in the NNCode01Acts array.
     */

    /* Initialise hidden unit activation to zero */
    NNCode01Acts[28+u] = 0.0;

    /* Accumulate weighted sum from inputs */
    for ( i=0; i < 12; ++i )
      NNCode01Acts[28+u] += *w++ * NNCode01Acts[16+i];

    /* Subtract threshold */
    NNCode01Acts[28+u] -= *t++;

  }

  /* Type of output required - selected by outputType parameter */
  switch ( outputType )
  {
    /* The usual type is to generate the output variables */
    case 0:


      /* Post-process output 0, numeric linear scaling */
      outputs[0] = ( NNCode01Acts[28] - 0.20725388601036268 ) / 0.0051813471502590676;
      break;

    /* type 1 is activation of output neurons */
    case 1:
      for ( i=0; i < 1; ++i )
        outputs[i] = NNCode01Acts[28+i];
      break;

    /* type 2 is codebook vector of winning node (lowest actn) 1st hidden layer */
    case 2:
      {
        int winner=0;
        for ( i=1; i < 12; ++i )
          if ( NNCode01Acts[4+i] < NNCode01Acts[4+winner] )
            winner=i;

        for ( i=0; i < 4; ++i )
          outputs[i] = NNCode01Weights[4*winner+i];
      }
      break;

    /* type 3 indicates winning node (lowest actn) in 1st hidden layer */
    case 3:
      {
        int winner=0;
        for ( i=1; i < 12; ++i )
          if ( NNCode01Acts[4+i] < NNCode01Acts[4+winner] )
            winner=i;

        outputs[0] = winner;
      }
      break;
  }
}

/* ---------------------------------------------------------- */
/*
  NNCode01RunPadded - run model NNCode01

  inputs - the input variables, in the same number and order
  as in the data set at the time the code was generated.
  This alternative routine is useful if you want a consistent
  interface for your generated routines, so that the number
  and order of variables is the same for all of them.
  Variables (ones used as inputs marked thus *):
  0)	c0 = Prop.(Unit) *

*/
/* ---------------------------------------------------------- */

void NNCode01RunPadded( double inputs[], double outputs[], int outputType )
{
  double in[1];

  /* Copy inputs */
  in[0]=inputs[0];


  /* Run the network */
  NNCode01Run( in, outputs, outputType );
}


/*
  Test harness. Compile including this main() procedure, as
  a windows console program or a DOS program, to interactively
  test that the software functions as expected.
*/

void main(void)
{
  int i, outputType=0, noOutputs=1;
  double inputs[1], outputs[4];

  printf( "\n\nNNCode test harness program. Enter inputs below\n" );
  printf( "Nominal variables should be numbered starting at 1 (0 for missing)\n" );
  printf( "(e.g. if an input is Gender={male,female}, enter 1 for male, 2 for female)\n" );

  /* Infinite (user-breakable) loop for repeated tests */
start_of_loop:
  while ( 1 )
  {
    /* Get the input pattern */
    for ( i=0; i < 1; ++i )
    {
      printf( "Enter value for input %d: ", i+1 );
      scanf( "%lg", & inputs[i] );

      /* Check for sub-menu */
      if ( inputs[i] == MENUCODE )
      {
        printf( "Control menu. Select output style, or exit:\n" );
        printf( "0. Normal output style (output variable)\n" );
        printf( "1. Output layer activations\n" );
        printf( "2. Codebook vector (usual only for Kohonen networks\n" );
        printf( "3. Winning hidden neuron (ditto only Kohonen)\n" );
        printf( "4. Exit program\n" );
        printf( "> " );
        scanf( "%d", & outputType );
        if ( outputType < 0 || outputType > 3 )
        {
          printf( "\nBye.\n" );
          return;
        }
        else
        {
          /* Determine how many outputs there are to display (depends on
           * output type)
           */
          switch ( outputType )
          {
            case 0:
              noOutputs = 1;
              break;

            case 1:
              noOutputs = 1;
              break;

            case 2:
              noOutputs = 4;
              break;

            case 3:
              noOutputs = 1;
              break;
          }
          goto start_of_loop;
        }
      }
    }

    /* Run the neural network */
    NNCode01Run( inputs, outputs, outputType );

    /* Display the output of the neural network */
    printf( "\n\nOutput of neural network:\n" );

    for ( i=0; i < noOutputs; ++i )
    {
      printf( "Output %d: ", i+1 );
      printf( "%g\n", outputs[i] );
    }

    printf( "\nEnter next input pattern (for control menu inc. exit, enter %d for any input):\n", MENUCODE );
  }
}

# BIOFUELS.PTML
BIOFUELS.PTML: AI-Driven Design of Eco-friendly Gasoline or Biofuels blends

Sustainable Gasoline Blends Design by AI-Driven Addition of Eco-friendly Chemical Compounds

Authors and affiliations
Harbil Bediaga a, Isabel Moreno-Benítezb, Sonia Arrasate b, José Luis Vilas-Vilela a, Lucía Orbe c, Juan Pedro Gómez-Martín d, 
Elías Unzueta c, and Humberto González-Díaz b,e,f,*

a Department of Physical Chemistry, University of Basque Country UPV/EHU, 48940, Leioa, Spain.

b Department of Organic and Inorganic Chemistry, University of Basque Country UPV/EHU, 48940, Leioa, Spain.

c Petronor Innovación S.L., 48550, Muskiz, Spain.

d Universidad Rey Juan Carlos (URJC), 28933, Madrid, Spain

eBasque Center for Biophysics, CSIC-UPV/EHU, 48940, Leioa, Spain.

fIKERBASQUE, Basque Foundation for Science, 48011, Bilbao, Spain

* Correspondence: humberto.gonzalezdiaz@ehu.eus

# Abstract
Designing sustainable fuel blends by adding eco-friendly pre-mixtures of chemical compounds (gasoline compounding) may help to reduce environmentalimpact. However, experimental testing of all possible pre-mixtures is time and resources consuming. Artificial Intelligence / Machine Learning (AI/ML) models may help to reduce experimentation cost but there are not publicly available datasets with detailed chemical composition of gasoline blends. Different IFPTML models were trained/validatedusing the Multivariate Linear Regression (MLR) compared to different Artificial Neural Networks (ANN) algorithms such Multi-Layer Perceptron (MLP), Deep Learning Network (DLN), Radial Basis Function (RBF).  The best IFPTML models found were able topredict the RON and MON values of these blends with R2 in the range 0.89 - 0.99 in training and validation series. We release here the C++ code of the ANN models trainined in this work. The new model may useful eco-friendly gasoline blends design with lower environmental impact. The data used to train/validate the models was released for public research purposes in the data repository Figshare: https://doi.org/10.6084/m9.figshare.21206174.v1

# Supporting Information
Supporting information files contain the following information:

Supporting Information file SI01.xlsx
Names, general formula, and code of 863 compounds usually find in byproducts of industrial processes 
which can be interesting to repurpose/reuse in more eco-friendly fuel blends in order to reduce carbon fingerprint.
https://github.com/glezdiazh/BIOFUELS.PTML/blob/main/Supporting%20Information%20file%20SI01.xlsx

Supporting Information file SI02.xlsx
Identifiers, RON, MON, PVR(kPa), and S values (Vm,k), Code	Property, input variables: function of reference f(vm,j)ref	 and PT operators:	
∆Vm,25,j	∆Vm,29,j	∆Vm,30,j	∆Vm,32,j	∆Vm,36,j	along with calculated/predicted values f(vm,j)calc, and their	Residuals,
Standard Predicted,	Standard Residual,	Std Error Predicted,	Mahananobis Distance,	Deleted Residual, and	CookDistance,
for 1404 fuel blends used to train (Set = t) or validate (Set = v) the models.
https://github.com/glezdiazh/BIOFUELS.PTML/blob/main/Supporting%20Information%20file%20SI02.xlsx

Supporting Information file SI03.xlsx
RON and MON values along with Names and composition of the 10 main components of 5000 fuel blends

Additionally, the data is also released for free in data repository Figshare and indexed with doi number:
https://doi.org/10.6084/m9.figshare.21206174.v1.

# Authors contributions
H.B.: Conceptualization, Data curation, Formal analysis, Investigation, Methodology, Resources, 
Software,Validation,Visualization,Writing original draft, Writing review and editing.
M.I.M.: Conceptualization, Formal analysis, Investigation, Methodology, Resources, Software, 
Supervision,Validation,Visualization,Writing original draft, Writing review and editing.
S.A.: Conceptualization, Data curation, Formal analysis, Investigation, Methodology, Resources, 
Software, Supervision,Validation,Visualization,Writing original draft, Writing review and editing.
J.L.V.: Conceptualization, Data curation, Formal analysis, Funding acquisition, Investigation, Methodology, 
Project administration, Resources, Software, Supervision,Validation,Visualization,Writing original draft, Writing review and editing.
L.O.: Conceptualization, Data curation, Formal analysis, Funding acquisition, Investigation, Methodology, Project administration, 
Resources, Software, Supervision,Validation,Visualization,Writing original draft, Writing review and editing.
E.U.: Conceptualization, Data curation, Formal analysis, Funding acquisition, Investigation, Methodology, Project administration, 
Resources, Software, Supervision,Validation,Visualization,Writing original draft, Writing review and editing.
J.P.M.: Conceptualization, Formal analysis, Investigation, Methodology, Supervision,Validation,Writing review and editing.
H.G.-D.: Conceptualization, Data curation, Formal analysis, Funding acquisition, Investigation, Methodology, Project administration, 
Resources, Software, Supervision, Validation, Visualization, Writing original draft, Writing review and editing.

# Funding
The authors acknowledge financial support from Basque government SPRI ELKARTEK program grant (KK-2019/00037). The authors are very especially grateful for the scientific lobbing and networking activity developed by F. Temprano towards the genesis of this project. The authors greatly appreciate and thanks expert consulting services from F. Temprano, J. Pérez-Mercader, andJ.I. Goicolea. It included state-of-art discussions and technical recommendations made on brain-storm meetings sponsored by the present grant. The authors are grateful and thank the help of the refinery Laboratory in the experimental tests that have been carried out in this work. The authors also acknowledge partial financial support from research grants of Ministry of Economy and Competitiveness, MICIIN (PID2019-104148GB-I00) - 2020 – 2022) and Basque Government (EuskoJaurlaritza) consolidation groups grant (IT1045-16). G.D.H. personally acknowledges the support of IKERBASQUE, Basque Foundation for Science. J.P.-M. thanks Petronor S.A. for their support. 

# Citation
The manuscript is under consideration. As soon as the manuscript is accepted, we'll include citation information in this repository.

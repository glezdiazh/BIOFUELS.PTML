Option Base 1
Sub Main

Dim newanalysis As Analysis
Set newanalysis = Analysis (scMultipleRegression, ActiveDataSet)

With newanalysis.Dialog
    .Variables = "2 | 33 37-38 40 44"
    .InputFile = scRegRawData
    .CasewiseDeletionOfMD = True
    .PerformNonDefaultStepwiseAnalysis = False
    .ReviewDescriptiveStatistics = False
    .ExtendedPrecisionComputations = False
    .BatchProcessingAndPrinting = False
End With

newanalysis.Run 

With newanalysis.Dialog
    .ComputeConfidenceLimits = True
    .AlphaForLimits = 0.050000
    .PLevelForHighlighting = 0.050000
End With

newanalysis.Run 

With newanalysis.Dialog
    .RawResiduals = True
    .StandardResidualPlusMinusSigmaOutliers = True
    .RawPredictedValues = True
    .MaxNumberOfCasesInSpreadsheetsAndGraphs = 100000
End With

newanalysis.GoBack 

With newanalysis.Dialog
    .Variables = "2 | 33 37-38 40 44"
    .InputFile = scRegRawData
    .CasewiseDeletionOfMD = True
    .PerformNonDefaultStepwiseAnalysis = True
    .ReviewDescriptiveStatistics = True
    .ExtendedPrecisionComputations = False
End With

newanalysis.Run 

With newanalysis.Dialog
    .SDEqualsSSOverN = False
End With

newanalysis.Run 

With newanalysis.Dialog
    .Variables = "2 | 33 37-38 40 44"
    .Method = scRegForwardStepwise
    .Intercept = scRegIncludedInModel
    .Tolerance = 0.000100
    .RidgeRegression = False
    .RidgeRegressionLambda = 0.100000
    .FToEnter = 1.000000
    .FToRemove = 0.000000e+000
    .NumberOfSteps = 7
    .DisplayResults = scRegSummaryOnly
    .BatchProcessingAndPrinting = False
End With

newanalysis.Run 

With newanalysis.Dialog
    .ComputeConfidenceLimits = True
    .AlphaForLimits = 0.050000
    .PLevelForHighlighting = 0.050000
End With

newanalysis.RouteOutput(newanalysis.Dialog.Summary).Visible = True

End Sub
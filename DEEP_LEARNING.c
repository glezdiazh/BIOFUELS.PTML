Option Base 1
Sub Main

Dim newanalysis As Analysis
Set newanalysis = Analysis (scNeuralNetworks, ActiveDataSet)

With newanalysis.Dialog
    .VariablesAndTypes = "2 7 9-44 | 1 | 8"
    .Variables = "2 | 1 7 9-44"
    .UseTrainingCode = True
    .TrainingCode = """t"""
    .UseSelectionCode = False
    .UseTestCode = True
    .TestCode = """v"""
    .UseIgnoreCode = False
    .TypeOfAnalysis = scSNNIntelligentProblemSolver
    .IssueMissingDataWarning = True
End With

newanalysis.Run 

With newanalysis.Dialog
    .IPSRunTimeBasedOnNetworksTested = True
    .NoOfNetworksTestedByIPS = 5
    .NoOfNetworksRetainedByIPS = 5
    .FormEnsemble = False
    .SelectSubsetOfIndependents = True
    .BalancePerformance = True
    .IncreaseFileSize = True
    .SaveCopyToFile = True
    .LinearNetwork = False
    .PNNNetwork = False
    .RBFNetwork = False
    .MLP3Network = True
    .MLP4Network = True
    .MLP3MinComplexity = 1
    .MLP3MaxComplexity = 20
    .MLP4MinComplexity = 1
    .MLP4MaxComplexity = 20
    .MLP4Layer3MinComplexity = 1
    .MLP4Layer3MaxComplexity = 20
    .AssignToHighestConfidence = True
    .TreatAsTimeSeries = False
    .RegressionLinear = True
    .RegressionLogistic = False
    .FeedbackImprovedNetworksOnly = True
    .GenerateSpreadsheet = True
    .DisplayTerminalMessage = True
    .CopyTerminalMessageToClipboard = True
End With

Set optionsdialog = newanalysis.Dialog.GetUserCaseSelection
With optionsdialog
    .SelectSpecifiedCases = True
    .UserSpecifiedCases = "1-1404"
End With

newanalysis.Dialog.SetUserCaseSelection optionsdialog
Set optionsdialog = Nothing

Set optionsdialog = newanalysis.Dialog.GetSampling
With optionsdialog
    .CasewiseDeletionOfMD = True
    .AdvancedRandomSelectionOfSubsets = True
    .RandomFixAllSubsets = True
    .AssignmentOfSubsetsFromVariable = True
    .FromSubsetVariable = "Set"
    .TrainingSubsetSizeBootstrap = 936
    .TestSubsetSizeBootstrap = 468
End With

newanalysis.Dialog.SetSampling optionsdialog
Set optionsdialog = Nothing

newanalysis.Run 

With newanalysis.Dialog
    .UseOverallSubsets = True
    .GenerateSummaryStatistics = True
    .ShowPredictions = True
    .IncludeObservedInPredictionsSpreadsheet = True
    .IncludeIndependentsInPredictionsSpreadsheet = False
    .IncludeSubsetVariableInPredictionsSpreadsheet = False
    .IncludeUserVariablesInPredictionsSpreadsheet = False
    .ShowRawResiduals = True
    .ShowResidualsSquared = False
    .ShowAbsoluteResiduals = False
    .ShowStandardResiduals = False
    .IncludePredictionsInResidualsSpreadsheet = True
    .IncludeObservedInResidualsSpreadsheet = False
    .IncludeIndependentsInResidualsSpreadsheet = False
    .IncludeSubsetVariableInResidualsSpreadsheet = False
    .IncludeUserVariablesInResidualsSpreadsheet = False
    .ShowRatioAndRankingSensitivityMetrics = True
    .SelectXaxisVariable = 1
    .SelectYaxisVariable = 0
    .CasewiseDeletionOfMD = True
End With

Set optionsdialog = newanalysis.Dialog.GetUserCaseSelection
With optionsdialog
    .SelectSpecifiedCases = True
    .UserSpecifiedCases = "1-1404"
End With

newanalysis.Dialog.SetUserCaseSelection optionsdialog
Set optionsdialog = Nothing

Set optionsdialog = newanalysis.Dialog.GetMultipleModelSelection
With optionsdialog
    .SelectedModels = "1-5 "
    .ShowOnlyStandaloneNetworks = True
    .SelectTheEnsembleItself = True
End With

newanalysis.Dialog.SetMultipleModelSelection optionsdialog
Set optionsdialog = Nothing


Set optionsdialog = newanalysis.Dialog.GetMultipleModelSelection
With optionsdialog
    .SelectedModels = "4 "
End With

newanalysis.Dialog.SetMultipleModelSelection optionsdialog
Set optionsdialog = Nothing

newanalysis.RouteOutput(newanalysis.Dialog.PrintModelSummarySpreadsheet).Visible = True

With newanalysis.Dialog
    .UseAllSubsetsSeparately = True
End With

newanalysis.RouteOutput(newanalysis.Dialog.PrintPredictionsSpreadsheet).Visible = True

newanalysis.Dialog.GotoNetworkIllustration 

With newanalysis.Dialog
    .CaseChange = 1
    .RunUserDefinedInput = "(0.501330)" + vbLf + _
	"(-113.789742)" + vbLf + _
	"(-0.708838)" + vbLf + _
	"(-2.189859)"
    .DisplayIllustrationInColor = True
    .ModelListView = "1"
End With

Set optionsdialog = newanalysis.Dialog.GetMultipleModelSelection
With optionsdialog
    .SelectedModels = "4 "
    .ShowOnlyStandaloneNetworks = True
    .SelectTheEnsembleItself = True
End With

newanalysis.Dialog.SetMultipleModelSelection optionsdialog
Set optionsdialog = Nothing

newanalysis.GoBack 

With newanalysis.Dialog
    .UseAllSubsetsSeparately = True
    .GenerateSummaryStatistics = True
    .ShowPredictions = True
    .IncludeObservedInPredictionsSpreadsheet = True
    .IncludeIndependentsInPredictionsSpreadsheet = False
    .IncludeSubsetVariableInPredictionsSpreadsheet = False
    .IncludeUserVariablesInPredictionsSpreadsheet = False
    .ShowRawResiduals = True
    .ShowResidualsSquared = False
    .ShowAbsoluteResiduals = False
    .ShowStandardResiduals = False
    .IncludePredictionsInResidualsSpreadsheet = True
    .IncludeObservedInResidualsSpreadsheet = False
    .IncludeIndependentsInResidualsSpreadsheet = False
    .IncludeSubsetVariableInResidualsSpreadsheet = False
    .IncludeUserVariablesInResidualsSpreadsheet = False
    .ShowRatioAndRankingSensitivityMetrics = True
    .SelectXaxisVariable = 1
    .SelectYaxisVariable = 0
    .CasewiseDeletionOfMD = True
End With

Set optionsdialog = newanalysis.Dialog.GetUserCaseSelection
With optionsdialog
    .SelectSpecifiedCases = True
    .UserSpecifiedCases = "1-1404"
End With

newanalysis.Dialog.SetUserCaseSelection optionsdialog
Set optionsdialog = Nothing

Set optionsdialog = newanalysis.Dialog.GetMultipleModelSelection
With optionsdialog
    .SelectedModels = "1 "
    .ShowOnlyStandaloneNetworks = True
    .SelectTheEnsembleItself = True
End With

newanalysis.Dialog.SetMultipleModelSelection optionsdialog
Set optionsdialog = Nothing

newanalysis.RouteOutput(newanalysis.Dialog.PrintModelSummarySpreadsheet).Visible = True

newanalysis.RouteOutput(newanalysis.Dialog.PrintPredictionsSpreadsheet).Visible = True

newanalysis.Dialog.GotoNetworkIllustration 

With newanalysis.Dialog
    .CaseChange = 1
    .RunUserDefinedInput = "(MON)"
    .DisplayIllustrationInColor = True
    .ModelListView = "1"
End With

Set optionsdialog = newanalysis.Dialog.GetMultipleModelSelection
With optionsdialog
    .SelectedModels = "1 "
    .ShowOnlyStandaloneNetworks = True
    .SelectTheEnsembleItself = True
End With

newanalysis.Dialog.SetMultipleModelSelection optionsdialog
Set optionsdialog = Nothing

newanalysis.GoBack 

With newanalysis.Dialog
    .UseAllSubsetsSeparately = True
    .GenerateSummaryStatistics = True
    .ShowPredictions = True
    .IncludeObservedInPredictionsSpreadsheet = True
    .IncludeIndependentsInPredictionsSpreadsheet = False
    .IncludeSubsetVariableInPredictionsSpreadsheet = False
    .IncludeUserVariablesInPredictionsSpreadsheet = False
    .ShowRawResiduals = True
    .ShowResidualsSquared = False
    .ShowAbsoluteResiduals = False
    .ShowStandardResiduals = False
    .IncludePredictionsInResidualsSpreadsheet = True
    .IncludeObservedInResidualsSpreadsheet = False
    .IncludeIndependentsInResidualsSpreadsheet = False
    .IncludeSubsetVariableInResidualsSpreadsheet = False
    .IncludeUserVariablesInResidualsSpreadsheet = False
    .ShowRatioAndRankingSensitivityMetrics = True
    .SelectXaxisVariable = 1
    .SelectYaxisVariable = 0
    .CasewiseDeletionOfMD = True
End With

Set optionsdialog = newanalysis.Dialog.GetUserCaseSelection
With optionsdialog
    .SelectSpecifiedCases = True
    .UserSpecifiedCases = "1-1404"
End With

newanalysis.Dialog.SetUserCaseSelection optionsdialog
Set optionsdialog = Nothing

Set optionsdialog = newanalysis.Dialog.GetMultipleModelSelection
With optionsdialog
    .SelectedModels = "1 "
    .ShowOnlyStandaloneNetworks = True
    .SelectTheEnsembleItself = True
End With

newanalysis.Dialog.SetMultipleModelSelection optionsdialog
Set optionsdialog = Nothing



newanalysis.UseGlobalOutputSettings = True
With newanalysis.OutputOption
    .Placement = scSingleCommonWorkbook
    .AutoPlaceResultInWorkbook = True
    .PlaceNewResultAtTop = False
    .ReportPlacement = scNoReport
    .ReportFont = "Courier New"
    .ReportFontSize = 9
    .SupplementaryInfoLevel = scInfoLevelNone
End With


newanalysis.Run 

With newanalysis.Dialog
    .VariablesAndTypes = "2 7 9-44 | 1 | 8"
    .Variables = "2 | 1 7 9-44"
    .UseTrainingCode = True
    .TrainingCode = "t"
    .UseSelectionCode = False
    .UseTestCode = True
    .TestCode = "v"
    .UseIgnoreCode = False
    .TypeOfAnalysis = scSNNIntelligentProblemSolver
    .NetworkListView = " 1 "
    .IssueMissingDataWarning = True
End With

End Sub

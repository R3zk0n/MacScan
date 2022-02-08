// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef CONTEXTCONFIGURATION_H
#define CONTEXTCONFIGURATION_H

@class NSOrderedSet;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface ContextConfiguration : NSObject {
    NSUInteger _luceneTermResultMinCount;
    NSUInteger _luceneTermResultMinCountRegularKeyword;
    NSUInteger _luceneTermResultMinCountNoPrefixRegularKeyword;
    NSUInteger _luceneTermResultMinCountNoPrefixTopic;
    NSUInteger _luceneTermResultMinCountNoPrefixName;
    NSUInteger _luceneTermResultMinCountNoPrefixFirstLastName;
    NSUInteger _luceneTermResultMinCountNoPrefixIntermediate;
    NSInteger _luceneTermResultDefaultMinPrefixQuoted;
    NSInteger _luceneTermResultDefaultMinPrefixRegularKeyword;
    NSInteger _luceneTermResultDefaultMinPrefixTopic;
    NSInteger _luceneTermResultDefaultMinPrefixName;
    NSInteger _luceneTermResultDefaultMinPrefixFirstLastName;
    NSInteger _luceneTermResultDefaultMinPrefixIntermediate;
    char _blacklistRemoveAllOnMatch;
    NSString *_indexVersionIdSuffix;
}


@property (retain) NSObject<OS_dispatch_semaphore> *maxConcurrencySemaphore; // ivar: _maxConcurrencySemaphore
@property (readonly, nonatomic) NSString *indexVersionId; // ivar: _indexVersionId
@property (readonly, nonatomic) NSArray *matchedABGroups; // ivar: _matchedABGroups
@property (readonly, nonatomic) char luceneEnabled; // ivar: _luceneEnabled
@property (readonly, nonatomic) float luceneMinRelativeScore; // ivar: _luceneMinRelativeScore
@property (readonly, nonatomic) float luceneMinAbsoluteScore; // ivar: _luceneMinAbsoluteScore
@property (readonly, nonatomic) float luceneMinScoreTitlePrimary; // ivar: _luceneMinScoreTitlePrimary
@property (readonly, nonatomic) float luceneMinScoreTitleMatch; // ivar: _luceneMinScoreTitleMatch
@property (readonly, nonatomic) NSUInteger luceneMinTitleMatchPrimaryAllNamesOK; // ivar: _luceneMinTitleMatchPrimaryAllNamesOK
@property (readonly, nonatomic) NSUInteger luceneMinTitleMatchAllNamesOK; // ivar: _luceneMinTitleMatchAllNamesOK
@property (readonly, nonatomic) NSUInteger luceneMinTitleMatchForScoreBoost; // ivar: _luceneMinTitleMatchForScoreBoost
@property (readonly, nonatomic) NSUInteger luceneMaxUniqueTotalTokens; // ivar: _luceneMaxUniqueTotalTokens
@property (readonly, nonatomic) NSUInteger luceneMaxUniqueNotSkippedTokens; // ivar: _luceneMaxUniqueNotSkippedTokens
@property (readonly, nonatomic) NSUInteger luceneMaxUniquePrimaryTokens; // ivar: _luceneMaxUniquePrimaryTokens
@property (readonly, nonatomic) NSUInteger luceneForceSecondaryAfterPosition; // ivar: _luceneForceSecondaryAfterPosition
@property (readonly, nonatomic) NSUInteger luceneIgnoreAfterPosition; // ivar: _luceneIgnoreAfterPosition
@property (readonly, nonatomic) NSUInteger luceneMinFileSizeForNSDataMMap; // ivar: _luceneMinFileSizeForNSDataMMap
@property (readonly, nonatomic) NSString *luceneIndexPath; // ivar: _luceneIndexPath
@property (readonly, nonatomic) NSSet *luceneSupportedLanguages; // ivar: _luceneSupportedLanguages
@property (readonly, nonatomic) char luceneUsePhraseQuery; // ivar: _luceneUsePhraseQuery
@property (readonly, nonatomic) char luceneTermResultGivenSurnameEnabled; // ivar: _luceneTermResultGivenSurnameEnabled
@property (readonly, nonatomic) NSUInteger luceneGivenSurnameMinGivenCount; // ivar: _luceneGivenSurnameMinGivenCount
@property (readonly, nonatomic) NSUInteger luceneGivenSurnameEarlyMentionLimit; // ivar: _luceneGivenSurnameEarlyMentionLimit
@property (readonly, nonatomic) NSInteger luceneTermResultFirstOccurrencePowerLawDecay; // ivar: _luceneTermResultFirstOccurrencePowerLawDecay
@property (readonly, nonatomic) NSUInteger luceneTermResultUnigramScoreMultiplier; // ivar: _luceneTermResultUnigramScoreMultiplier
@property (readonly, nonatomic) NSUInteger luceneTermResultBigramScoreMultiplier; // ivar: _luceneTermResultBigramScoreMultiplier
@property (readonly, nonatomic) NSUInteger luceneMaxTermResults; // ivar: _luceneMaxTermResults
@property (readonly, nonatomic) NSUInteger luceneMaxTermResultsWithDocument; // ivar: _luceneMaxTermResultsWithDocument
@property (readonly, nonatomic) NSUInteger luceneMaxTermAndBigramResults; // ivar: _luceneMaxTermAndBigramResults
@property (readonly, nonatomic) NSUInteger luceneMaxTermAndBigramResultsWithDocument; // ivar: _luceneMaxTermAndBigramResultsWithDocument
@property (readonly, nonatomic) NSUInteger luceneQueryDefaultNumResults; // ivar: _luceneQueryDefaultNumResults
@property (readonly, nonatomic) NSUInteger luceneQueryMaxNumResults; // ivar: _luceneQueryMaxNumResults
@property (readonly, nonatomic) NSSet *blacklistTitles; // ivar: _blacklistTitles
@property (readonly, nonatomic) NSSet *blacklistPortrait; // ivar: _blacklistPortrait
@property (readonly, nonatomic) float luceneBlendAlpha; // ivar: _luceneBlendAlpha
@property (readonly, nonatomic) float luceneBlendBeta; // ivar: _luceneBlendBeta
@property (readonly, nonatomic) float luceneBlendGamma; // ivar: _luceneBlendGamma
@property (readonly, nonatomic) NSUInteger maxConcurrency; // ivar: _maxConcurrency
@property (readonly, nonatomic) float maxConcurrencySemaphoreTimeoutSecs; // ivar: _maxConcurrencySemaphoreTimeoutSecs
@property (readonly, nonatomic) float findResultsTimeoutSecs; // ivar: _findResultsTimeoutSecs
@property (readonly, nonatomic) float findResultsSlowSecs; // ivar: _findResultsSlowSecs
@property (readonly, nonatomic) float debugDelaySecs; // ivar: _debugDelaySecs
@property (readonly, nonatomic) NSString *debugForceLanguageTag; // ivar: _debugForceLanguageTag
@property (readonly, nonatomic) NSArray *debugFakeResults; // ivar: _debugFakeResults
@property (readonly, nonatomic) char debugDisableMetricsLogging; // ivar: _debugDisableMetricsLogging
@property (readonly, nonatomic) char debugUseMadvise; // ivar: _debugUseMadvise
@property (readonly, nonatomic) char debugUseOldIndexInput; // ivar: _debugUseOldIndexInput
@property (readonly, nonatomic) NSUInteger debugNSDataBufferSize; // ivar: _debugNSDataBufferSize
@property (readonly, nonatomic) char debugUIFeedback; // ivar: _debugUIFeedback
@property (readonly, nonatomic) char portraitEnabled; // ivar: _portraitEnabled
@property (readonly, nonatomic) NSInteger minTokenCountToAugment; // ivar: _minTokenCountToAugment
@property (readonly, nonatomic) NSInteger minPrefixAdditionalResults; // ivar: _minPrefixAdditionalResults
@property (readonly, nonatomic) char highLevelTopicsEnabled; // ivar: _highLevelTopicsEnabled
@property (readonly, nonatomic) char internalGradingEnabled; // ivar: _internalGradingEnabled
@property (readonly, nonatomic) char digitalHealthEnabled; // ivar: _digitalHealthEnabled
@property (readonly, nonatomic) char fallbackModeQuerySuggestionsEnabled; // ivar: _fallbackModeQuerySuggestionsEnabled
@property (readonly, nonatomic) char extraQueryCompletionsEnabled; // ivar: _extraQueryCompletionsEnabled
@property (readonly, nonatomic) NSUInteger extraQueryCompletionsTopKLanguages; // ivar: _extraQueryCompletionsTopKLanguages
@property (readonly, nonatomic) char tagsEnabled; // ivar: _tagsEnabled
@property (readonly, nonatomic) char coreNLPTaggingEnabled; // ivar: _coreNLPTaggingEnabled
@property (readonly, nonatomic) float coreNLPMinScore; // ivar: _coreNLPMinScore
@property (readonly, nonatomic) float coreNLPRelevantScore; // ivar: _coreNLPRelevantScore
@property (readonly, nonatomic) char rawTextEnabled; // ivar: _rawTextEnabled
@property (readonly, nonatomic) CGFloat hideCompletionsTimeLimit; // ivar: _hideCompletionsTimeLimit
@property (readonly, nonatomic) NSUInteger mustPrefixMatchLength; // ivar: _mustPrefixMatchLength
@property (readonly, nonatomic) NSOrderedSet *desiredLanguageTags; // ivar: _desiredLanguageTags
@property (readonly, nonatomic) NSString *nGramBreakingSeparators; // ivar: _nGramBreakingSeparators
@property (readonly, nonatomic) NSString *allowedNGramSeparators; // ivar: _allowedNGramSeparators
@property (readonly, nonatomic) NSString *quotedTokenCharacterSet; // ivar: _quotedTokenCharacterSet
@property (readonly, nonatomic) NSString *partialNGramCharacterSet; // ivar: _partialNGramCharacterSet
@property (readonly, nonatomic) NSUInteger bigramMaxEnclosedStopwords; // ivar: _bigramMaxEnclosedStopwords
@property (readonly, nonatomic) NSUInteger bigramMaxOffsetDelta; // ivar: _bigramMaxOffsetDelta


-(id)init;
-(void)_performReinitWithIndexVersion:(id)arg0 ;
-(NSUInteger)findResultsTimeoutWithNanosAlreadySpent:(float)arg0 ;
-(id)abGroupOfDictionary:(id)arg0 ;
-(void)_updateFromPlist:(id)arg0 ;
-(id)debugStatus;
+(void)initialize;
+(id)sharedInstance;
+(void)reloadFromGlobalPlist:(id)arg0 indexSpecificPlist:(id)arg1 developerPlist:(id)arg2 indexVersionId:(id)arg3 ;
+(void)_updateConfiguration:(id)arg0 ;
+(void)_triggerConfigurationUpdate;
+(void)registerUpdateHandler:(id)arg0 ;


@end


#endif
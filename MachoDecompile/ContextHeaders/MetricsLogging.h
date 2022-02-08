// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef METRICSLOGGING_H
#define METRICSLOGGING_H


#import <Foundation/Foundation.h>


@interface MetricsLogging : NSObject {
    uint8_t countSafariQueryEvents;
    uint8_t countSafariLanguageNotSupported;
    uint8_t countSafariSlowSoft;
    uint8_t countSafariSlowTimeout;
    uint8_t countSafariResultsShownCalled;
    uint8_t countSafariResultsShownSomething;
    uint8_t countSafariResultsShownSuppressed;
    uint8_t countSafariEngagements;
    uint8_t countSafariTransactionSuccessful;
    uint8_t countSafariResultsShownCalledCompletion;
    uint8_t countSafariResultsShownSomethingCompletion;
    uint8_t countSafariResultsShownSuppressedCompletion;
    uint8_t countSafariEngagementsCompletion;
    uint8_t countSafariTransactionSuccessfulCompletion;
    uint8_t countSafariLikelyUnsolicitedResultsShownCalled;
    uint8_t countSafariLikelyUnsolicitedResultsShownSomething;
    uint8_t countSafariLikelyUnsolicitedResultsShownSuppressed;
    uint8_t countSafariLikelyUnsolicitedEngagements;
    uint8_t countSafariLikelyUnsolicitedTransactionSuccessful;
    uint8_t countSafariLikelyUnsolicitedResultsShownCalledCompletion;
    uint8_t countSafariLikelyUnsolicitedResultsShownSomethingCompletion;
    uint8_t countSafariLikelyUnsolicitedResultsShownSuppressedCompletion;
    uint8_t countSafariLikelyUnsolicitedEngagementsCompletion;
    uint8_t countSafariLikelyUnsolicitedTransactionSuccessfulCompletion;
    uint8_t countSafariQueryEventsUnknown;
    uint8_t countSafariQueryEventsURLOnly;
    uint8_t countSafariQueryEventsMainText;
    uint8_t countSafariQueryEventsRawText;
    uint8_t countSafariURLLookupTotal;
    uint8_t countSafariURLLookupSuccess;
    uint8_t countSafariURLLookupSuccessStrong;
    uint8_t countDHURLLookupBundleTotal;
    uint8_t countDHURLLookupBundleSuccess;
    uint8_t countDHURLLookupBundleSuccessStrong;
    uint8_t countDHURLLookupWebTotal;
    uint8_t countDHURLLookupWebSuccess;
    uint8_t countDHURLLookupWebSuccessStrong;
}


@property (copy) NSString *abGroupLoggingKey; // ivar: _abGroupLoggingKey


-(id)_init;
-(void)_postInit;
-(void)_updateABGroupKey;
-(void)recordFindResultsMsec:(CGFloat)arg0 queryType:(NSUInteger)arg1 requestType:(NSUInteger)arg2 indexId:(id)arg3 ;
-(void)recordQueryLuceneMsec:(CGFloat)arg0 queryType:(NSUInteger)arg1 requestType:(NSUInteger)arg2 indexId:(id)arg3 ;
-(void)recordInputLength:(NSUInteger)arg0 languageTag:(id)arg1 languageSupported:(char)arg2 requestType:(NSUInteger)arg3 indexId:(id)arg4 ;
-(void)recordQueryEventWithLuceneResultCount:(NSUInteger)arg0 error:(id)arg1 requestType:(NSUInteger)arg2 indexId:(id)arg3 ;
-(void)recordResultsShownWithUserInputLength:(NSUInteger)arg0 count:(NSUInteger)arg1 couldHaveShown:(NSUInteger)arg2 topicIds:(id)arg3 serverOverride:(char)arg4 indexId:(id)arg5 requestType:(NSUInteger)arg6 logType:(NSUInteger)arg7 ;
-(void)recordQueryEngagementWithUserInputLength:(NSUInteger)arg0 completionLength:(NSUInteger)arg1 result:(id)arg2 rank:(NSUInteger)arg3 indexId:(id)arg4 requestType:(NSUInteger)arg5 logType:(NSUInteger)arg6 ;
-(void)recordTransactionSuccessfulWithUserInputLength:(NSUInteger)arg0 completionLength:(NSUInteger)arg1 indexId:(id)arg2 requestType:(NSUInteger)arg3 logType:(NSUInteger)arg4 ;
-(void)recordAssetInfo:(id)arg0 ;
-(void)recordSlowFindResults:(char)arg0 requestType:(NSUInteger)arg1 indexId:(id)arg2 coldEngine:(char)arg3 ;
-(void)recordURLLookupSucceeded:(NSUInteger)arg0 bundleId:(char)arg1 indexId:(id)arg2 requestType:(NSUInteger)arg3 ;
-(id)debugStatus;
-(void)runInBackground:(id)arg0 ;
+(id)instance;


@end


#endif
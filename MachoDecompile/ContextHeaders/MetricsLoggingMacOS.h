// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef METRICSLOGGINGMACOS_H
#define METRICSLOGGINGMACOS_H



#import "MetricsLogging.h"

@interface MetricsLoggingMacOS : MetricsLogging



-(id)init;
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
+(void)initialize;
+(char *)stringForQueryType:(NSUInteger)arg0 ;


@end


#endif
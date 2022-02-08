// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0



@protocol CKContextXPCProtocol


-(void)findResultsForRequest:(id)arg0 withReply:(id)arg1 ;
-(void)warmUpForRequestType:(NSUInteger)arg0 withReply:(id)arg1 ;
-(void)capabilitiesForRequestType:(NSUInteger)arg0 withReply:(id)arg1 ;
-(void)ancestorsForTopics:(id)arg0 withReply:(id)arg1 ;
-(void)pingServiceWithReply:(id)arg0 ;
-(void)shutdownServiceWithReply:(id)arg0 ;
-(void)logResultsShownForResponseId:(id)arg0 shown:(NSUInteger)arg1 couldHaveShown:(NSUInteger)arg2 topicIds:(id)arg3 serverOverride:(char)arg4 inputLength:(NSUInteger)arg5 requestType:(NSUInteger)arg6 logType:(NSUInteger)arg7 ;
-(void)logEngagementForResponseId:(id)arg0 result:(id)arg1 rank:(NSUInteger)arg2 inputLength:(NSUInteger)arg3 completionLength:(NSUInteger)arg4 requestType:(NSUInteger)arg5 logType:(NSUInteger)arg6 ;
-(void)logTransactionSuccessfulForResponseId:(id)arg0 inputLength:(NSUInteger)arg1 completionLength:(NSUInteger)arg2 requestType:(NSUInteger)arg3 logType:(NSUInteger)arg4 ;
-(void)statusWithReply:(id)arg0 ;
-(void)semaphoreWithReply:(id)arg0 ;

@end


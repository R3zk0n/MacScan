// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef CKCONTEXTXPCPROTOCOLIMPL_H
#define CKCONTEXTXPCPROTOCOLIMPL_H


#import <Foundation/Foundation.h>

#import "CTKAssets.h"
#import "ContextEngine.h"
#import "CKContextXPCProtocol-Protocol.h"

@interface CKContextXPCProtocolImpl : NSObject <CKContextXPCProtocol>

 {
    CTKAssets *_assets;
    ContextEngine *_contextEngine;
    NSMapTable *_donationExecutorsMap;
}




-(id)initWithAssets:(id)arg0 ;
-(void)pingServiceWithReply:(id)arg0 ;
-(void)shutdownServiceWithReply:(id)arg0 ;
-(id)_contextEngineInstance;
-(void)warmUpForRequestType:(NSUInteger)arg0 withReply:(id)arg1 ;
-(void)findResultsForRequest:(id)arg0 withReply:(id)arg1 ;
-(void)_findResultsForRequest:(id)arg0 withReply:(id)arg1 transaction:(unk)arg2 ;
-(void)capabilitiesForRequestType:(NSUInteger)arg0 withReply:(id)arg1 ;
-(void)ancestorsForTopics:(id)arg0 withReply:(id)arg1 ;
-(void)statusWithReply:(id)arg0 ;
-(void)donate:(id)arg0 ;
-(id)_firstDebugUrlStringForDonation:(id)arg0 ;
-(void)logResultsShownForResponseId:(id)arg0 shown:(NSUInteger)arg1 couldHaveShown:(NSUInteger)arg2 topicIds:(id)arg3 serverOverride:(char)arg4 inputLength:(NSUInteger)arg5 requestType:(NSUInteger)arg6 logType:(NSUInteger)arg7 ;
-(void)logEngagementForResponseId:(id)arg0 result:(id)arg1 rank:(NSUInteger)arg2 inputLength:(NSUInteger)arg3 completionLength:(NSUInteger)arg4 requestType:(NSUInteger)arg5 logType:(NSUInteger)arg6 ;
-(void)logTransactionSuccessfulForResponseId:(id)arg0 inputLength:(NSUInteger)arg1 completionLength:(NSUInteger)arg2 requestType:(NSUInteger)arg3 logType:(NSUInteger)arg4 ;
-(void)semaphoreWithReply:(id)arg0 ;
+(void)initialize;
+(void)_shutdownServiceWithReply:(id)arg0 ;
+(id)dumpEnvironment;


@end


#endif
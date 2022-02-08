// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVELUCENESCOREINTERCEPTTARGETBASE_H
#define COMAPPLEPROACTIVELUCENESCOREINTERCEPTTARGETBASE_H


#import <Foundation/Foundation.h>

#import "ComAppleProactiveLuceneScoreInterceptTarget-Protocol.h"

@interface ComAppleProactiveLuceneScoreInterceptTargetBase : NSObject <ComAppleProactiveLuceneScoreInterceptTarget>

 {
    BOOL enabled_;
    BOOL scoringModified_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)isScoringModified;
-(void)setScoringModifiedWithBoolean:(BOOL)arg0 ;
-(BOOL)isEnabled;
-(void)setEnabledWithBoolean:(BOOL)arg0 ;
-(id)init;


@end


#endif
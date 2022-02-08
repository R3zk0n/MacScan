// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef DALVIKSYSTEMBLOCKGUARD_BLOCKGUARDPOLICYEXCEPTION_H
#define DALVIKSYSTEMBLOCKGUARD_BLOCKGUARDPOLICYEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaLangRuntimeException.h"

@interface DalvikSystemBlockGuard_BlockGuardPolicyException : JavaLangRuntimeException {
    int mPolicyState_;
    int mPolicyViolated_;
    NSString *mMessage_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 withNSString:(id)arg2 ;
-(int)getPolicy;
-(int)getPolicyViolation;
-(id)getMessage;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif
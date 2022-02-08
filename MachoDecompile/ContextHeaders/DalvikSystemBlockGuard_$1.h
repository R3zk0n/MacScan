// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef DALVIKSYSTEMBLOCKGUARD_$1_H
#define DALVIKSYSTEMBLOCKGUARD_$1_H


#import <Foundation/Foundation.h>

#import "DalvikSystemBlockGuard_Policy-Protocol.h"

@interface DalvikSystemBlockGuard_$1 : NSObject <DalvikSystemBlockGuard_Policy>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)onWriteToDisk;
-(void)onReadFromDisk;
-(void)onNetwork;
-(int)getPolicyMask;
-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif
// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGTHREADGROUP_H
#define JAVALANGTHREADGROUP_H


#import <Foundation/Foundation.h>

#import "JavaLangThreadGroup.h"
#import "IOSObjectArray.h"
#import "JavaLangThread_UncaughtExceptionHandler-Protocol.h"

@interface JavaLangThreadGroup : NSObject <JavaLangThread_UncaughtExceptionHandler>

 {
    JavaLangThreadGroup *parent_;
    int numThreads_;
    int numGroups_;
    NSString *name_;
    int maxPriority_;
    IOSObjectArray *childrenThreads_;
    IOSObjectArray *childrenGroups_;
    id *childrenGroupsLock_;
    id *childrenThreadsLock_;
    BOOL isDestroyed_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithJavaLangThreadGroup:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithJavaLangThreadGroup:(id)arg0 ;
-(int)activeCount;
-(int)activeGroupCount;
-(void)addWithJavaLangThread:(id)arg0 ;
-(void)addWithJavaLangThreadGroup:(id)arg0 ;
-(void)checkAccess;
-(void)destroy;
-(int)enumerateWithJavaLangThreadArray:(id)arg0 ;
-(int)enumerateWithJavaLangThreadArray:(id)arg0 withBoolean:(BOOL)arg1 ;
-(int)enumerateWithJavaLangThreadGroupArray:(id)arg0 ;
-(int)enumerateWithJavaLangThreadGroupArray:(id)arg0 withBoolean:(BOOL)arg1 ;
-(int)enumerateGenericWithNSObjectArray:(id)arg0 withBoolean:(BOOL)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
-(int)getMaxPriority;
-(id)getName;
-(id)getParent;
-(BOOL)isDestroyed;
-(void)list;
-(void)listWithInt:(int)arg0 ;
-(BOOL)parentOfWithJavaLangThreadGroup:(id)arg0 ;
-(void)removeWithJavaLangThread:(id)arg0 ;
-(void)removeWithJavaLangThreadGroup:(id)arg0 ;
-(void)setMaxPriorityWithInt:(int)arg0 ;
-(void)setParentWithJavaLangThreadGroup:(id)arg0 ;
-(void)uncaughtExceptionWithJavaLangThread:(id)arg0 withJavaLangThrowable:(id)arg1 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif
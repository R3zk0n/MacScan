// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_$2_H
#define COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_$2_H


#import <Foundation/Foundation.h>

#import "ComAppleContextkitCategoriesConstellation_Request.h"
#import "JavaUtilConcurrentAtomicAtomicBoolean.h"
#import "JavaUtilConcurrentAtomicAtomicInteger.h"
#import "ComAppleContextkitCategoriesConstellation_AncestorConsumer-Protocol.h"

@interface ComAppleContextkitCategoriesConstellation_Request_$2 : NSObject <ComAppleContextkitCategoriesConstellation_AncestorConsumer>

 {
    ComAppleContextkitCategoriesConstellation_Request *this$0_;
    int val$count_;
    int val$weight_;
    JavaUtilConcurrentAtomicAtomicBoolean *val$hasModifications_;
    JavaUtilConcurrentAtomicAtomicInteger *val$numNonZeroesTouched_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)acceptWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithComAppleContextkitCategoriesConstellation_Request:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaUtilConcurrentAtomicAtomicBoolean:(id)arg3 withJavaUtilConcurrentAtomicAtomicInteger:(id)arg4 ;
-(void)dealloc;


@end


#endif
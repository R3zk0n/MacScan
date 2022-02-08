// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_$4_H
#define COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_$4_H


#import <Foundation/Foundation.h>

#import "ComAppleContextkitCategoriesConstellation_Request.h"
#import "ComAppleContextkitCategoriesConstellation_AncestorConsumer-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface ComAppleContextkitCategoriesConstellation_Request_$4 : NSObject <ComAppleContextkitCategoriesConstellation_AncestorConsumer>

 {
    ComAppleContextkitCategoriesConstellation_Request *this$0_;
    id<JavaUtilMap> *val$categoryIdToRank_;
    id<JavaUtilMap> *val$qidToRankedCategoryIds_;
    NSString *val$qid_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)acceptWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithComAppleContextkitCategoriesConstellation_Request:(id)arg0 withJavaUtilMap:(id)arg1 withJavaUtilMap:(id)arg2 withNSString:(id)arg3 ;
-(void)dealloc;


@end


#endif
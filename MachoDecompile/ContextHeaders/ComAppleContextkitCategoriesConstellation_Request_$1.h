// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_$1_H
#define COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_$1_H


#import <Foundation/Foundation.h>

#import "ComAppleContextkitCategoriesConstellation_Request.h"
#import "ComAppleContextkitCategoriesConstellation_AncestorConsumer-Protocol.h"
#import "JavaUtilSet-Protocol.h"

@interface ComAppleContextkitCategoriesConstellation_Request_$1 : NSObject <ComAppleContextkitCategoriesConstellation_AncestorConsumer>

 {
    ComAppleContextkitCategoriesConstellation_Request *this$0_;
    int val$weight_;
    id<JavaUtilSet> *val$seen_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)acceptWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithComAppleContextkitCategoriesConstellation_Request:(id)arg0 withInt:(int)arg1 withJavaUtilSet:(id)arg2 ;
-(void)dealloc;


@end


#endif
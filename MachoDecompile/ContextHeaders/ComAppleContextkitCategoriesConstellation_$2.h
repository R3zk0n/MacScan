// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_$2_H
#define COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_$2_H


#import <Foundation/Foundation.h>

#import "ComAppleContextkitCategoriesConstellation_AncestorConsumer-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface ComAppleContextkitCategoriesConstellation_$2 : NSObject <ComAppleContextkitCategoriesConstellation_AncestorConsumer>

 {
    id<JavaUtilMap> *val$idsAndHeight_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)acceptWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithJavaUtilMap:(id)arg0 ;
-(void)dealloc;


@end


#endif
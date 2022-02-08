// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_CATEGORYCOUNT_H
#define COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_CATEGORYCOUNT_H


#import <Foundation/Foundation.h>

#import "JavaUtilList-Protocol.h"

@interface ComAppleContextkitCategoriesConstellation_CategoryCount : NSObject {
    int id__;
    int qids_;
    int weight_;
    int logWeight_;
    int hlt_;
    id<JavaUtilList> *matchingQids_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)addMatchingQidWithNSString:(id)arg0 ;
-(void)dealloc;


@end


#endif
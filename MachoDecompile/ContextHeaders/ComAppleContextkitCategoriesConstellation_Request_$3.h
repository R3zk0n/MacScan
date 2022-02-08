// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_$3_H
#define COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_$3_H


#import <Foundation/Foundation.h>

#import "JavaUtilComparator-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface ComAppleContextkitCategoriesConstellation_Request_$3 : NSObject <JavaUtilComparator>

 {
    id<JavaUtilMap> *val$categoryIdToRank_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(int)compareWithId:(id)arg0 withId:(id)arg1 ;
-(id)initWithJavaUtilMap:(id)arg0 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef QIDCATEGORYPROVIDERIMPL_H
#define QIDCATEGORYPROVIDERIMPL_H


#import <Foundation/Foundation.h>

#import "KeylessMap.h"
#import "ComAppleContextkitCategoriesQIDCategoryProvider-Protocol.h"

@interface QIDCategoryProviderImpl : NSObject <ComAppleContextkitCategoriesQIDCategoryProvider>

 {
    KeylessMap *_tsm;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithTreasureMap:(id)arg0 ;
-(id)categoryIdsForQIDWithNSString:(id)arg0 ;


@end


#endif
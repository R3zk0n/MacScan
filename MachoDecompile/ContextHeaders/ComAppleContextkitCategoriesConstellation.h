// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_H
#define COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexInput.h"
#import "ComAppleContextkitCategoriesCatIdTitleMap.h"
#import "JavaIoCloseable-Protocol.h"
#import "ComAppleContextkitCategoriesQIDCategoryProvider-Protocol.h"

@interface ComAppleContextkitCategoriesConstellation : NSObject <JavaIoCloseable>

 {
    int maxCategoryIdExcl_;
    OrgApacheLuceneStoreIndexInput *inProto_;
    ComAppleContextkitCategoriesCatIdTitleMap *titleMapProto_;
    id<ComAppleContextkitCategoriesQIDCategoryProvider> *qidToCategoryIdTreasureMap_;
    ComAppleContextkitCategoriesCatIdTitleMap *qidMapProto_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithDirectory:(id)arg0 titlesFile:(id)arg1 qidToCategoryIdTreasureMap:(id)arg2 ;
-(void)close;
-(id)newTitleMapper;
-(id)newQIDMapper;
-(id)categoryIdsForQIDWithNSString:(id)arg0 ;
-(id)newRequestWithMaxCategories:(int)arg0 minQidCount:(int)arg1 minWeight:(int)arg2 ;
-(id)newRequestWithMaxQids:(int)arg0 maxCategoriesFirstRun:(int)arg1 maxCategories:(int)arg2 minQidCount:(int)arg3 minWeight:(int)arg4 ;
-(id)qidToCategoryIdWithNSString:(id)arg0 ;
-(void)sortUnsignedWithJavaUtilList:(id)arg0 ;
-(id)qidToCategoryIdAndHeightWithNSString:(id)arg0 ;
-(id)heightForQIDCategoryIdWithNSString:(id)arg0 withInt:(int)arg1 ;
-(BOOL)isIgnoredCategoryWithInt:(int)arg0 ;
-(id)mainCategoryForQIDWithNSString:(id)arg0 withComAppleContextkitCategoriesCatIdTitleMap:(id)arg1 ;
-(id)mainCategoryIdForQIDWithNSString:(id)arg0 ;
-(id)ancestorCategoriesForQIDs:(id)arg0 usingMapper:(id)arg1 ;
-(void)dealloc;
+(void)initialize;


@end


#endif
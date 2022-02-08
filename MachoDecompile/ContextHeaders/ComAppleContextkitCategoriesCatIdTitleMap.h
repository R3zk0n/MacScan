// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITCATEGORIESCATIDTITLEMAP_H
#define COMAPPLECONTEXTKITCATEGORIESCATIDTITLEMAP_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexInput.h"
#import "NSCopying-Protocol.h"
#import "JavaIoCloseable-Protocol.h"

@interface ComAppleContextkitCategoriesCatIdTitleMap : NSObject <NSCopying, JavaIoCloseable>

 {
    int maxTitleIdExcl_;
    OrgApacheLuceneStoreIndexInput *titleIn_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
-(id)initWithOrgApacheLuceneStoreIndexInput:(id)arg0 withInt:(int)arg1 ;
-(id)clone;
-(id)categoryIdToTitleWithInt:(int)arg0 ;
-(void)close;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
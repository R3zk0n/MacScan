// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREIOCONTEXT_H
#define ORGAPACHELUCENESTOREIOCONTEXT_H

@class OrgApacheLuceneStoreFlushInfo;

#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIOContext_ContextEnum.h"
#import "OrgApacheLuceneStoreMergeInfo.h"

@interface OrgApacheLuceneStoreIOContext : NSObject {
    OrgApacheLuceneStoreIOContext_ContextEnum *context_;
    OrgApacheLuceneStoreMergeInfo *mergeInfo_;
    OrgApacheLuceneStoreFlushInfo *flushInfo_;
    BOOL readOnce_;
}




-(id)init;
-(id)initWithOrgApacheLuceneStoreFlushInfo:(id)arg0 ;
-(id)initWithOrgApacheLuceneStoreIOContext_ContextEnum:(id)arg0 ;
-(id)initWithBoolean:(BOOL)arg0 ;
-(id)initWithOrgApacheLuceneStoreMergeInfo:(id)arg0 ;
-(id)initWithOrgApacheLuceneStoreIOContext_ContextEnum:(id)arg0 withOrgApacheLuceneStoreMergeInfo:(id)arg1 ;
-(id)initWithOrgApacheLuceneStoreIOContext:(id)arg0 withBoolean:(BOOL)arg1 ;
-(NSUInteger)hash;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(void)dealloc;
+(void)initialize;


@end


#endif
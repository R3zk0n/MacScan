// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBITDOCIDSET_H
#define ORGAPACHELUCENEUTILBITDOCIDSET_H



#import "OrgApacheLuceneSearchDocIdSet.h"
#import "OrgApacheLuceneUtilBitSet.h"

@interface OrgApacheLuceneUtilBitDocIdSet : OrgApacheLuceneSearchDocIdSet {
    OrgApacheLuceneUtilBitSet *set_;
    NSInteger cost_;
}




-(id)initWithOrgApacheLuceneUtilBitSet:(id)arg0 withLong:(NSInteger)arg1 ;
-(id)initWithOrgApacheLuceneUtilBitSet:(id)arg0 ;
-(id)iterator;
-(id)bits;
-(BOOL)isCacheable;
-(NSInteger)ramBytesUsed;
-(id)description;
-(void)dealloc;
+(void)initialize;


@end


#endif
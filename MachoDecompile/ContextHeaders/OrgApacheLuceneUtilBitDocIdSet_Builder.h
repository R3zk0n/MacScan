// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBITDOCIDSET_BUILDER_H
#define ORGAPACHELUCENEUTILBITDOCIDSET_BUILDER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilSparseFixedBitSet.h"
#import "OrgApacheLuceneUtilFixedBitSet.h"

@interface OrgApacheLuceneUtilBitDocIdSet_Builder : NSObject {
    int maxDoc_;
    int threshold_;
    OrgApacheLuceneUtilSparseFixedBitSet *sparseSet_;
    OrgApacheLuceneUtilFixedBitSet *denseSet_;
    NSInteger costUpperBound_;
}




-(id)initWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(id)initWithInt:(int)arg0 ;
-(BOOL)dense;
-(BOOL)isDefinitelyEmpty;
-(void)or__WithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)and__WithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)andNotWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(id)build;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILSPARSEFIXEDBITSET_H
#define ORGAPACHELUCENEUTILSPARSEFIXEDBITSET_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilBitSet.h"
#import "IOSLongArray.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilSparseFixedBitSet : OrgApacheLuceneUtilBitSet <OrgApacheLuceneUtilBits, OrgApacheLuceneUtilAccountable>

 {
    IOSLongArray *indices_;
    IOSObjectArray *bits_;
    int length_;
    int nonZeroLongCount_;
    NSInteger ramBytesUsed_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(int)length;
-(BOOL)consistentWithInt:(int)arg0 ;
-(int)cardinality;
-(int)approximateCardinality;
-(BOOL)getWithInt:(int)arg0 ;
-(void)setWithInt:(int)arg0 ;
-(void)insertBlockWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)insertLongWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(void)clearWithInt:(int)arg0 ;
-(void)and__WithInt:(int)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 ;
-(void)removeLongWithInt:(int)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 withInt:(int)arg3 ;
-(void)clearWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)clearWithinBlockWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)firstDocWithInt:(int)arg0 ;
-(int)nextSetBitWithInt:(int)arg0 ;
-(int)lastDocWithInt:(int)arg0 ;
-(int)prevSetBitWithInt:(int)arg0 ;
-(NSInteger)longBitsWithLong:(NSInteger)arg0 withLongArray:(id)arg1 withInt:(int)arg2 ;
-(void)or__WithInt:(int)arg0 withLong:(NSInteger)arg1 withLongArray:(id)arg2 withInt:(int)arg3 ;
-(void)or__WithOrgApacheLuceneUtilSparseFixedBitSet:(id)arg0 ;
-(void)orDenseWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)or__WithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)and__WithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(NSInteger)ramBytesUsed;
-(void)dealloc;
+(void)initialize;


@end


#endif
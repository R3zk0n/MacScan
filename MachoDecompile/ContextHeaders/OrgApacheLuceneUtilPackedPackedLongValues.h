// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDLONGVALUES_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDLONGVALUES_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilLongValues.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilPackedPackedLongValues : OrgApacheLuceneUtilLongValues <OrgApacheLuceneUtilAccountable>

 {
    IOSObjectArray *values_;
    int pageShift_;
    int pageMask_;
    NSInteger size_;
    NSInteger ramBytesUsed_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilPackedPackedInts_ReaderArray:(id)arg2 withLong:(NSInteger)arg3 withLong:(NSInteger)arg4 ;
-(NSInteger)size;
-(int)decodeBlockWithInt:(int)arg0 withLongArray:(id)arg1 ;
-(NSInteger)getWithInt:(int)arg0 withInt:(int)arg1 ;
-(NSInteger)getWithLong:(NSInteger)arg0 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(id)iterator;
-(void)dealloc;
+(id)packedBuilderWithInt:(int)arg0 withFloat:(float)arg1 ;
+(id)packedBuilderWithFloat:(float)arg0 ;
+(id)deltaPackedBuilderWithInt:(int)arg0 withFloat:(float)arg1 ;
+(id)deltaPackedBuilderWithFloat:(float)arg0 ;
+(id)monotonicBuilderWithInt:(int)arg0 withFloat:(float)arg1 ;
+(id)monotonicBuilderWithFloat:(float)arg0 ;
+(void)initialize;


@end


#endif
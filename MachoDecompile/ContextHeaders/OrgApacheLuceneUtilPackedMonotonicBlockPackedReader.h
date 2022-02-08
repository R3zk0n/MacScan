// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDMONOTONICBLOCKPACKEDREADER_H
#define ORGAPACHELUCENEUTILPACKEDMONOTONICBLOCKPACKEDREADER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilLongValues.h"
#import "IOSLongArray.h"
#import "IOSFloatArray.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilPackedMonotonicBlockPackedReader : OrgApacheLuceneUtilLongValues <OrgApacheLuceneUtilAccountable>

 {
    int blockShift_;
    int blockMask_;
    NSInteger valueCount_;
    IOSLongArray *minValues_;
    IOSFloatArray *averages_;
    IOSObjectArray *subReaders_;
    NSInteger sumBPV_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneStoreIndexInput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 withBoolean:(BOOL)arg4 ;
-(NSInteger)getWithLong:(NSInteger)arg0 ;
-(NSInteger)decodeDeltaWithLong:(NSInteger)arg0 ;
-(NSInteger)size;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)dealloc;
+(NSInteger)expectedWithLong:(NSInteger)arg0 withFloat:(float)arg1 withInt:(int)arg2 ;
+(id)ofWithOrgApacheLuceneStoreIndexInput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 withBoolean:(BOOL)arg4 ;


@end


#endif
// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDDIRECTPACKED64SINGLEBLOCKREADER_H
#define ORGAPACHELUCENEUTILPACKEDDIRECTPACKED64SINGLEBLOCKREADER_H

@class ReaderImpl;


#import "OrgApacheLuceneStoreIndexInput.h"

@interface OrgApacheLuceneUtilPackedDirectPacked64SingleBlockReader : ReaderImpl {
    OrgApacheLuceneStoreIndexInput *in_;
    int bitsPerValue_;
    NSInteger startPointer_;
    int valuesPerBlock_;
    NSInteger mask_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneStoreIndexInput:(id)arg2 ;
-(NSInteger)getWithInt:(int)arg0 ;
-(NSInteger)ramBytesUsed;
-(void)dealloc;


@end


#endif
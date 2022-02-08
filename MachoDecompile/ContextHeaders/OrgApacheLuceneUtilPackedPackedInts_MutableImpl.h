// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDINTS_MUTABLEIMPL_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDINTS_MUTABLEIMPL_H

@class Mutable;



@interface OrgApacheLuceneUtilPackedPackedInts_MutableImpl : Mutable {
    int valueCount_;
    int bitsPerValue_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)getBitsPerValue;
-(int)size;
-(id)description;


@end


#endif
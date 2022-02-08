// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDINTS_WRITER_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDINTS_WRITER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDataOutput.h"

@interface OrgApacheLuceneUtilPackedPackedInts_Writer : NSObject {
    OrgApacheLuceneStoreDataOutput *out_;
    int valueCount_;
    int bitsPerValue_;
}




-(id)initWithOrgApacheLuceneStoreDataOutput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeHeader;
-(int)bitsPerValue;
-(void)dealloc;


@end


#endif
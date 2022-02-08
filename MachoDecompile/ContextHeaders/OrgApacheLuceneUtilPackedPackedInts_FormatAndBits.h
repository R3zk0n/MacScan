// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDINTS_FORMATANDBITS_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDINTS_FORMATANDBITS_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilPackedPackedInts_FormatEnum.h"

@interface OrgApacheLuceneUtilPackedPackedInts_FormatAndBits : NSObject {
    OrgApacheLuceneUtilPackedPackedInts_FormatEnum *format_;
    int bitsPerValue_;
}




-(id)initWithOrgApacheLuceneUtilPackedPackedInts_FormatEnum:(id)arg0 withInt:(int)arg1 ;
-(id)description;
-(void)dealloc;


@end


#endif
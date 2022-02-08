// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITUTILSPINDLEARRAY_BUCKET_H
#define COMAPPLECONTEXTKITUTILSPINDLEARRAY_BUCKET_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"

@interface ComAppleContextkitUtilSpindleArray_Bucket : NSObject {
    IOSByteArray *uncompressed_;
    int firstEntryIdInBucket_;
    int bytesRead_;
    int currentEntryId_;
    int numBytesDecompressed_;
    int startOffset_;
    int entryLength_;
}




-(id)initWithComAppleContextkitUtilSpindleArray:(id)arg0 withComAppleContextkitUtilSpindleArray_State:(id)arg1 withOrgApacheLuceneStoreIndexInput:(id)arg2 withIntArray:(id)arg3 withInt:(int)arg4 withBoolean:(BOOL)arg5 ;
-(void)completeEntryWithComAppleContextkitUtilSpindleArray_State:(id)arg0 ;
-(BOOL)skipToEntryIdWithComAppleContextkitUtilSpindleArray_State:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif
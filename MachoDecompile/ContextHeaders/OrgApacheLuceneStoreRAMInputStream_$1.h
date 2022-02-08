// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTORERAMINPUTSTREAM_$1_H
#define ORGAPACHELUCENESTORERAMINPUTSTREAM_$1_H



#import "OrgApacheLuceneStoreRAMInputStream.h"

@interface OrgApacheLuceneStoreRAMInputStream_$1 : OrgApacheLuceneStoreRAMInputStream {
    NSInteger val$offset_;
}




-(void)seekWithLong:(NSInteger)arg0 ;
-(NSInteger)getFilePointer;
-(NSInteger)length;
-(id)sliceWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(id)initWithLong:(NSInteger)arg0 withNSString:(id)arg1 withOrgApacheLuceneStoreRAMFile:(id)arg2 withLong:(NSInteger)arg3 ;


@end


#endif
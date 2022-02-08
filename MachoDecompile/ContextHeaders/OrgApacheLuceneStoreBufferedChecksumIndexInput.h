// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREBUFFEREDCHECKSUMINDEXINPUT_H
#define ORGAPACHELUCENESTOREBUFFEREDCHECKSUMINDEXINPUT_H



#import "OrgApacheLuceneStoreChecksumIndexInput.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "JavaUtilZipChecksum-Protocol.h"

@interface OrgApacheLuceneStoreBufferedChecksumIndexInput : OrgApacheLuceneStoreChecksumIndexInput {
    OrgApacheLuceneStoreIndexInput *main_;
    id<JavaUtilZipChecksum> *digest_;
}




-(id)initWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
-(char)readByte;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(NSInteger)getChecksum;
-(void)close;
-(NSInteger)getFilePointer;
-(NSInteger)length;
-(id)clone;
-(id)sliceWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif
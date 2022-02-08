// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVELUCENENSDATADIRECTORY_RANDOMACCESSFILEINDEXINPUT_H
#define COMAPPLEPROACTIVELUCENENSDATADIRECTORY_RANDOMACCESSFILEINDEXINPUT_H



#import "OrgApacheLuceneStoreBufferedIndexInput.h"
#import "JavaIoRandomAccessFile.h"
#import "ComAppleProactiveLuceneNSDataDirectory_RandomAccessFileIndexInput.h"
#import "NSCopying-Protocol.h"

@interface ComAppleProactiveLuceneNSDataDirectory_RandomAccessFileIndexInput : OrgApacheLuceneStoreBufferedIndexInput <NSCopying>

 {
    JavaIoRandomAccessFile *raf_;
    NSInteger length_;
    NSInteger pos_;
    ComAppleProactiveLuceneNSDataDirectory_RandomAccessFileIndexInput *original_;
    ComAppleProactiveLuceneNSDataDirectory_RandomAccessFileIndexInput *lastUsed_;
}




-(id)initWithComAppleProactiveLuceneNSDataDirectory:(id)arg0 withNSString:(id)arg1 ;
-(void)readInternalWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)seekInternalWithLong:(NSInteger)arg0 ;
-(void)close;
-(NSInteger)length;
-(id)clone;
-(void)dealloc;
-(void)__javaClone;


@end


#endif
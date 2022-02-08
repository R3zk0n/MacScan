// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREMMAPDIRECTORY_H
#define ORGAPACHELUCENESTOREMMAPDIRECTORY_H



#import "OrgApacheLuceneStoreFSDirectory.h"

@interface OrgApacheLuceneStoreMMapDirectory : OrgApacheLuceneStoreFSDirectory {
    int chunkSizePower_;
    BOOL useUnmapHack_;
    BOOL preload_;
}




-(id)initWithOrgLukhnosPortmobileFilePath:(id)arg0 withOrgApacheLuceneStoreLockFactory:(id)arg1 ;
-(id)initWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
-(id)initWithOrgLukhnosPortmobileFilePath:(id)arg0 withInt:(int)arg1 ;
-(id)initWithOrgLukhnosPortmobileFilePath:(id)arg0 withOrgApacheLuceneStoreLockFactory:(id)arg1 withInt:(int)arg2 ;
-(void)setUseUnmapWithBoolean:(BOOL)arg0 ;
-(BOOL)getUseUnmap;
-(void)setPreloadWithBoolean:(BOOL)arg0 ;
-(BOOL)getPreload;
-(int)getMaxChunkSize;
-(id)openInputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(id)mapWithNSString:(id)arg0 withJavaNioChannelsFileChannel:(id)arg1 withLong:(NSInteger)arg2 withLong:(NSInteger)arg3 ;
-(id)convertMapFailedIOExceptionWithJavaIoIOException:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 ;
+(void)initialize;


@end


#endif
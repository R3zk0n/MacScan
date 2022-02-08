// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSEGMENTINFO_H
#define ORGAPACHELUCENEINDEXSEGMENTINFO_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDirectory.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneCodecsCodec.h"
#import "OrgApacheLuceneUtilVersion.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilSet-Protocol.h"

@interface OrgApacheLuceneIndexSegmentInfo : NSObject {
    NSString *name_;
    OrgApacheLuceneStoreDirectory *dir_;
    int maxDoc_;
    BOOL isCompoundFile_;
    IOSByteArray *id__;
    OrgApacheLuceneCodecsCodec *codec_;
    id<JavaUtilMap> *diagnostics_;
    id<JavaUtilMap> *attributes_;
    OrgApacheLuceneUtilVersion *version__;
    id<JavaUtilSet> *setFiles_;
}




-(void)setDiagnosticsWithJavaUtilMap:(id)arg0 ;
-(id)getDiagnostics;
-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneUtilVersion:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 withOrgApacheLuceneCodecsCodec:(id)arg5 withJavaUtilMap:(id)arg6 withByteArray:(id)arg7 withJavaUtilMap:(id)arg8 ;
-(void)setUseCompoundFileWithBoolean:(BOOL)arg0 ;
-(BOOL)getUseCompoundFile;
-(void)setCodecWithOrgApacheLuceneCodecsCodec:(id)arg0 ;
-(id)getCodec;
-(int)maxDoc;
-(void)setMaxDocWithInt:(int)arg0 ;
-(id)files;
-(id)description;
-(id)toStringWithOrgApacheLuceneStoreDirectory:(id)arg0 withInt:(int)arg1 ;
-(id)toStringWithInt:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)getVersion;
-(id)getId;
-(void)setFilesWithJavaUtilCollection:(id)arg0 ;
-(void)addFilesWithJavaUtilCollection:(id)arg0 ;
-(void)addFileWithNSString:(id)arg0 ;
-(void)checkFileNamesWithJavaUtilCollection:(id)arg0 ;
-(id)namedForThisSegmentWithNSString:(id)arg0 ;
-(id)getAttributeWithNSString:(id)arg0 ;
-(id)putAttributeWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)getAttributes;
-(void)dealloc;


@end


#endif
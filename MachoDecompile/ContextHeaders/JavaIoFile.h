// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOFILE_H
#define JAVAIOFILE_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"
#import "JavaLangComparable-Protocol.h"

@interface JavaIoFile : NSObject <JavaIoSerializable, JavaLangComparable>

 {
    NSString *path_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaIoFile:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithJavaNetURI:(id)arg0 ;
-(BOOL)canExecute;
-(BOOL)canRead;
-(BOOL)canWrite;
-(BOOL)doAccessWithInt:(int)arg0 ;
-(int)compareToWithId:(id)arg0 ;
-(BOOL)delete__;
-(void)deleteOnExit;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)exists;
-(id)getAbsolutePath;
-(id)getAbsoluteFile;
-(id)getCanonicalPath;
-(id)getCanonicalFile;
-(id)getName;
-(id)getParent;
-(id)getParentFile;
-(id)getPath;
-(BOOL)isAbsolute;
-(BOOL)isDirectory;
-(BOOL)isFile;
-(BOOL)isHidden;
-(NSInteger)lastModified;
-(BOOL)setLastModifiedWithLong:(NSInteger)arg0 ;
-(BOOL)setReadOnly;
-(BOOL)setExecutableWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 ;
-(BOOL)setExecutableWithBoolean:(BOOL)arg0 ;
-(BOOL)setReadableWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 ;
-(BOOL)setReadableWithBoolean:(BOOL)arg0 ;
-(BOOL)setWritableWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 ;
-(BOOL)setWritableWithBoolean:(BOOL)arg0 ;
-(BOOL)doChmodWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(NSInteger)length;
-(id)list;
-(id)listWithJavaIoFilenameFilter:(id)arg0 ;
-(id)listFiles;
-(id)listFilesWithJavaIoFilenameFilter:(id)arg0 ;
-(id)listFilesWithJavaIoFileFilter:(id)arg0 ;
-(id)filenamesToFilesWithNSStringArray:(id)arg0 ;
-(BOOL)mkdir;
-(BOOL)mkdirImplWithNSString:(id)arg0 ;
-(BOOL)mkdirs;
-(BOOL)mkdirsWithBoolean:(BOOL)arg0 ;
-(BOOL)createNewFile;
-(BOOL)renameToWithJavaIoFile:(id)arg0 ;
-(id)toURI;
-(id)toURL;
-(id)getAbsoluteName;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(NSInteger)getTotalSpace;
-(NSInteger)getUsableSpace;
-(NSInteger)getFreeSpace;
-(void)dealloc;
+(id)fixSlashesWithNSString:(id)arg0 ;
+(id)joinWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(void)checkURIWithJavaNetURI:(id)arg0 ;
+(id)listRoots;
+(BOOL)setLastModifiedImplWithNSString:(id)arg0 withLong:(NSInteger)arg1 ;
+(id)listImplWithNSString:(id)arg0 ;
+(id)createTempFileWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)createTempFileWithNSString:(id)arg0 withNSString:(id)arg1 withJavaIoFile:(id)arg2 ;
+(BOOL)isCaseSensitiveImpl;
+(void)initialize;
+(id)__annotations_toURL;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif
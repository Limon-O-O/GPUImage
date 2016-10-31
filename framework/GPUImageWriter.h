//
//  GPUImageWriter.h
//  GPUImageExample
//
//  Created by Limon on 10/16/16.
//  Copyright © 2016 TechTorch. All rights reserved.
//

#import <GPUImage/GPUImageMovieWriter.h>

@interface GPUImageWriter : GPUImageMovieWriter <GPUImageInput>

@property(nonatomic, retain) AVAssetWriterInput *assetWriterAudioInputBuffer;

- (NSDictionary *)audioSettings:(NSDictionary *)audioOutputSettings;

@end

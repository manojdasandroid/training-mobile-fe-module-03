//
//  WebRenderer.h
//  BackbaseCXP
//
//  Created by Backbase R&D B.V. on 01/06/16.
//  Copyright © 2016 Backbase R&D B.V. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WebRenderer <Renderer>

/**
 * Enables the text-to-link transformations. This allows to detect phone numbers, email address amongst other types and
 * translated to the appropriated link scheme and payload.
 * @param enable YES to enable it, NO to turn it off.
 * @discussion By default, the text-to-link functionality is on. Important: This flag only has effect before the item
 * is rendered with the start method.
 */
- (void)enableTextToLink:(BOOL)enable;

/**
 * Checks if the text-to-link functionality is enabled for the current Renderer.
 * @return YES if it is enabled, NO otherwise.
 */
- (BOOL)isTextToLinkEnabled;

@end

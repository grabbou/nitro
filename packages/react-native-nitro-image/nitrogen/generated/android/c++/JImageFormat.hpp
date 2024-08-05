///
/// JImageFormat.hpp
/// Sun Aug 04 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "ImageFormat.hpp"

namespace margelo::nitro::image {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "ImageFormat" and the the Kotlin enum "ImageFormat".
   */
  struct JImageFormat: public jni::JavaClass<JImageFormat> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/ImageFormat;";

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum ImageFormat.
     */
    ImageFormat toImageFormat() {
      static const auto clazz = javaClassStatic();
      static const auto fieldOrdinal = clazz->getField<int>("ordinal");
      int ordinal = this->getFieldValue(fieldOrdinal);
      return static_cast<ImageFormat>(ordinal);
    }

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    static jni::alias_ref<JImageFormat> create(ImageFormat value) {
      static const auto clazz = javaClassStatic();
      static const auto fieldJPG = clazz->getStaticField<JImageFormat>("JPG");
      static const auto fieldPNG = clazz->getStaticField<JImageFormat>("PNG");
      
      switch (value) {
        case ImageFormat::JPG:
          return clazz->getStaticFieldValue(fieldJPG);
        case ImageFormat::PNG:
          return clazz->getStaticFieldValue(fieldPNG);
        default:
          std::string stringValue = std::to_string(static_cast<int>(value));
          throw std::runtime_error("Invalid enum value (" + stringValue + "!");
      }
    }
  };

} // namespace margelo::nitro::image

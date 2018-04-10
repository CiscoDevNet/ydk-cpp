#ifndef _CISCO_IOS_XE_NATIVE_217_
#define _CISCO_IOS_XE_NATIVE_217_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_216.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter : public ydk::Entity
{
    public:
        WebFilter();
        ~WebFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Url; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url> url;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url


class Native::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Service; //type: Native::Voice::Service

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Voice::Service> > service;
        
}; // Native::Voice


class Native::Voice::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Fax; //type: Native::Voice::Service::Fax

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Voice::Service::Fax> fax;
                class Type;

}; // Native::Voice::Service


class Native::Voice::Service::Fax : public ydk::Entity
{
    public:
        Fax();
        ~Fax();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf fallback; //type: Fallback
        ydk::YLeaf codec; //type: Codec
        ydk::YLeaf ls_redundancy; //type: uint8
        ydk::YLeaf hs_redundancy; //type: uint8
        ydk::YLeaf version; //type: Version
        class Protocol;
        class Fallback;
        class Codec;
        class Version;

}; // Native::Voice::Service::Fax


class Native::VoiceCard : public ydk::Entity
{
    public:
        VoiceCard();
        ~VoiceCard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf slot; //type: uint8

}; // Native::VoiceCard


class Native::Vpdn : public ydk::Entity
{
    public:
        Vpdn();
        ~Vpdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf authen_before_forward; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeafList search_order; //type: list of  SearchOrder
        class SearchOrder;

}; // Native::Vpdn


class Native::Vstack : public ydk::Entity
{
    public:
        Vstack();
        ~Vstack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf director; //type: string

}; // Native::Vstack

class Native::Voice::Service::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pots;
        static const ydk::Enum::YLeaf saf;
        static const ydk::Enum::YLeaf voatm;
        static const ydk::Enum::YLeaf vofr;
        static const ydk::Enum::YLeaf voip;

};

class Native::Voice::Service::Fax::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pass_through;
        static const ydk::Enum::YLeaf t38;

};

class Native::Voice::Service::Fax::Fallback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pass_through;

};

class Native::Voice::Service::Fax::Codec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf g711alaw;
        static const ydk::Enum::YLeaf g711ulaw;

};

class Native::Voice::Service::Fax::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_3;

};

class Native::Vpdn::SearchOrder : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dnis;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf multihop_hostname;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_217_ */


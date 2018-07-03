#ifndef _CISCO_IOS_XE_NATIVE_110_
#define _CISCO_IOS_XE_NATIVE_110_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_108.hpp"
#include "Cisco_IOS_XE_native_109.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId : public ydk::Entity
{
    public:
        CallingStationId();
        ~CallingStationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Format; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format> format;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format : public ydk::Entity
{
    public:
        Format();
        ~Format();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msisdn; //type: empty
        class MacAddress; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress> mac_address;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        class Default; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default
        class Ietf; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf
        class OneByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte
        class ThreeByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte
        class TwoByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte
        class Unformatted; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default> default_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf> ietf; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte> one_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte> three_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte> two_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted> unformatted; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf : public ydk::Entity
{
    public:
        Ietf();
        ~Ietf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte : public ydk::Entity
{
    public:
        OneByte();
        ~OneByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte : public ydk::Entity
{
    public:
        ThreeByte();
        ~ThreeByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte : public ydk::Entity
{
    public:
        TwoByte();
        ~TwoByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted : public ydk::Entity
{
    public:
        Unformatted();
        ~Unformatted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser : public ydk::Entity
{
    public:
        EapUser();
        ~EapUser();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_open_session; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Access; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting
        class Attribute; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute> attribute;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow; //type: string
        ydk::YLeaf block; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator : public ydk::Entity
{
    public:
        MessageAuthenticator();
        ~MessageAuthenticator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore> ignore; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accounting; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pass_through; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession : public ydk::Entity
{
    public:
        PwlanSession();
        ~PwlanSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reconnect; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication : public ydk::Entity
{
    public:
        ReAuthentication();
        ~ReAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_apply; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier : public ydk::Entity
{
    public:
        SessionIdentifier();
        ~SessionIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute; //type: uint8
        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa : public ydk::Entity
{
    public:
        Vsa();
        ~Vsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vendor; //type: uint16
        ydk::YLeaf type; //type: uint8

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: uint16
        ydk::YLeaf reconnect; //type: uint16
        ydk::YLeaf request; //type: uint16
        ydk::YLeaf roaming; //type: uint16
        class Disconnect; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect> disconnect;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect : public ydk::Entity
{
    public:
        Disconnect();
        ~Disconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acct_stop; //type: uint16
        ydk::YLeaf reauth_fail; //type: uint16

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect


class Native::Aaa::Server::Radius::Proxy::ClientIpMask : public ydk::Entity
{
    public:
        ClientIpMask();
        ~ClientIpMask();

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

        class Client; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client

        ydk::YList client;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: string
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication
        class CallingStationId; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId
        class EapUser; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser
        class Filter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter
        class Key; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator
        class Mode; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode
        class PwlanSession; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession
        class ReAuthentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication
        class SessionIdentifier; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier
        class Timer; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId> calling_station_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser> eap_user;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator> message_authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession> pwlan_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication> re_authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier> session_identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer> timer;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId : public ydk::Entity
{
    public:
        CallingStationId();
        ~CallingStationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Format; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format> format;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format : public ydk::Entity
{
    public:
        Format();
        ~Format();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msisdn; //type: empty
        class MacAddress; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress> mac_address;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        class Default; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default
        class Ietf; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf
        class OneByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte
        class ThreeByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte
        class TwoByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte
        class Unformatted; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default> default_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf> ietf; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte> one_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte> three_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte> two_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted> unformatted; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf : public ydk::Entity
{
    public:
        Ietf();
        ~Ietf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte : public ydk::Entity
{
    public:
        OneByte();
        ~OneByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte : public ydk::Entity
{
    public:
        ThreeByte();
        ~ThreeByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte : public ydk::Entity
{
    public:
        TwoByte();
        ~TwoByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted : public ydk::Entity
{
    public:
        Unformatted();
        ~Unformatted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser : public ydk::Entity
{
    public:
        EapUser();
        ~EapUser();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_open_session; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Access; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting
        class Attribute; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute> attribute;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow; //type: string
        ydk::YLeaf block; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator : public ydk::Entity
{
    public:
        MessageAuthenticator();
        ~MessageAuthenticator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore> ignore; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accounting; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pass_through; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession : public ydk::Entity
{
    public:
        PwlanSession();
        ~PwlanSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reconnect; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication : public ydk::Entity
{
    public:
        ReAuthentication();
        ~ReAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_apply; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier : public ydk::Entity
{
    public:
        SessionIdentifier();
        ~SessionIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute; //type: uint8
        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa : public ydk::Entity
{
    public:
        Vsa();
        ~Vsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vendor; //type: uint16
        ydk::YLeaf type; //type: uint8

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: uint16
        ydk::YLeaf reconnect; //type: uint16
        ydk::YLeaf request; //type: uint16
        ydk::YLeaf roaming; //type: uint16
        class Disconnect; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect> disconnect;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect : public ydk::Entity
{
    public:
        Disconnect();
        ~Disconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acct_stop; //type: uint16
        ydk::YLeaf reauth_fail; //type: uint16

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf : public ydk::Entity
{
    public:
        ClientIpVrf();
        ~ClientIpVrf();

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

        class Client; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client

        ydk::YList client;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf vrf; //type: string
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication
        class CallingStationId; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId
        class EapUser; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser
        class Filter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter
        class Key; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator
        class Mode; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode
        class PwlanSession; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession
        class ReAuthentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication
        class SessionIdentifier; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier
        class Timer; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId> calling_station_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser> eap_user;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator> message_authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession> pwlan_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication> re_authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier> session_identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer> timer;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId : public ydk::Entity
{
    public:
        CallingStationId();
        ~CallingStationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Format; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format> format;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format : public ydk::Entity
{
    public:
        Format();
        ~Format();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msisdn; //type: empty
        class MacAddress; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress> mac_address;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        class Default; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default
        class Ietf; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf
        class OneByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte
        class ThreeByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte
        class TwoByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte
        class Unformatted; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default> default_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf> ietf; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte> one_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte> three_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte> two_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted> unformatted; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf : public ydk::Entity
{
    public:
        Ietf();
        ~Ietf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte : public ydk::Entity
{
    public:
        OneByte();
        ~OneByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte : public ydk::Entity
{
    public:
        ThreeByte();
        ~ThreeByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte : public ydk::Entity
{
    public:
        TwoByte();
        ~TwoByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted : public ydk::Entity
{
    public:
        Unformatted();
        ~Unformatted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser : public ydk::Entity
{
    public:
        EapUser();
        ~EapUser();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_open_session; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Access; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting
        class Attribute; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute> attribute;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow; //type: string
        ydk::YLeaf block; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator : public ydk::Entity
{
    public:
        MessageAuthenticator();
        ~MessageAuthenticator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore> ignore; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accounting; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pass_through; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession : public ydk::Entity
{
    public:
        PwlanSession();
        ~PwlanSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reconnect; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication : public ydk::Entity
{
    public:
        ReAuthentication();
        ~ReAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_apply; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier : public ydk::Entity
{
    public:
        SessionIdentifier();
        ~SessionIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute; //type: uint8
        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa : public ydk::Entity
{
    public:
        Vsa();
        ~Vsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vendor; //type: uint16
        ydk::YLeaf type; //type: uint8

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: uint16
        ydk::YLeaf reconnect; //type: uint16
        ydk::YLeaf request; //type: uint16
        ydk::YLeaf roaming; //type: uint16
        class Disconnect; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect> disconnect;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect : public ydk::Entity
{
    public:
        Disconnect();
        ~Disconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acct_stop; //type: uint16
        ydk::YLeaf reauth_fail; //type: uint16

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf : public ydk::Entity
{
    public:
        ClientIpMaskVrf();
        ~ClientIpMaskVrf();

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

        class Client; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client

        ydk::YList client;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf vrf; //type: string
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication
        class CallingStationId; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId
        class EapUser; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser
        class Filter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter
        class Key; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator
        class Mode; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode
        class PwlanSession; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession
        class ReAuthentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication
        class SessionIdentifier; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier
        class Timer; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId> calling_station_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser> eap_user;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator> message_authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession> pwlan_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication> re_authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier> session_identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer> timer;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId : public ydk::Entity
{
    public:
        CallingStationId();
        ~CallingStationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Format; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format> format;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format : public ydk::Entity
{
    public:
        Format();
        ~Format();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msisdn; //type: empty
        class MacAddress; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress> mac_address;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        class Default; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default
        class Ietf; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf
        class OneByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte
        class ThreeByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte
        class TwoByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte
        class Unformatted; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default> default_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf> ietf; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte> one_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte> three_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte> two_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted> unformatted; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf : public ydk::Entity
{
    public:
        Ietf();
        ~Ietf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_110_ */


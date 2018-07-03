#ifndef _CISCO_IOS_XE_NATIVE_111_
#define _CISCO_IOS_XE_NATIVE_111_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_108.hpp"
#include "Cisco_IOS_XE_native_109.hpp"
#include "Cisco_IOS_XE_native_110.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte : public ydk::Entity
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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter : public ydk::Entity
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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte : public ydk::Entity
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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter : public ydk::Entity
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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte : public ydk::Entity
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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter : public ydk::Entity
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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter : public ydk::Entity
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

        class Access; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting
        class Attribute; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute> attribute;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access : public ydk::Entity
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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting : public ydk::Entity
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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator : public ydk::Entity
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

        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore> ignore; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier : public ydk::Entity
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
        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer : public ydk::Entity
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
        class Disconnect; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect> disconnect;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect


class Native::Aaa::Server::Radius::Proxy::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

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

        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::Send::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Send::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::Send


class Native::Aaa::Server::Radius::Proxy::Send::Vsa : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RpclientSourceAddress; //type: Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress> rpclient_source_address; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::Send::Vsa


class Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress : public ydk::Entity
{
    public:
        RpclientSourceAddress();
        ~RpclientSourceAddress();

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

        ydk::YLeaf accounting; //type: empty
        ydk::YLeaf authentication; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress


class Native::Aaa::Server::Radius::Sesm : public ydk::Entity
{
    public:
        Sesm();
        ~Sesm();

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

        ydk::YLeaf port; //type: uint16
        class Client; //type: Native::Aaa::Server::Radius::Sesm::Client
        class Key; //type: Native::Aaa::Server::Radius::Sesm::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Sesm::MessageAuthenticator

        ydk::YList client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Sesm::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Sesm::MessageAuthenticator> message_authenticator;
        
}; // Native::Aaa::Server::Radius::Sesm


class Native::Aaa::Server::Radius::Sesm::Client : public ydk::Entity
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
        class Vrf; //type: Native::Aaa::Server::Radius::Sesm::Client::Vrf
        class Key; //type: Native::Aaa::Server::Radius::Sesm::Client::Key

        ydk::YList vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Sesm::Client::Key> key;
        
}; // Native::Aaa::Server::Radius::Sesm::Client


class Native::Aaa::Server::Radius::Sesm::Client::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Key; //type: Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key> key;
        
}; // Native::Aaa::Server::Radius::Sesm::Client::Vrf


class Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key


class Native::Aaa::Server::Radius::Sesm::Client::Key : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Sesm::Client::Key


class Native::Aaa::Server::Radius::Sesm::Key : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::Sesm::Key


class Native::Aaa::Server::Radius::Sesm::MessageAuthenticator : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Aaa::Server::Radius::Sesm::MessageAuthenticator


class Native::Aaa::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

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

        ydk::YLeaf display; //type: Display
        ydk::YLeaf success_track_conf_time; //type: uint8
        class Display;

}; // Native::Aaa::Login


class Native::Aaa::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

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

        class Threshold; //type: Native::Aaa::Memory::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Memory::Threshold> threshold;
        
}; // Native::Aaa::Memory


class Native::Aaa::Memory::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

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

        class Accounting; //type: Native::Aaa::Memory::Threshold::Accounting
        class Authentication; //type: Native::Aaa::Memory::Threshold::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Memory::Threshold::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Memory::Threshold::Authentication> authentication;
        
}; // Native::Aaa::Memory::Threshold


class Native::Aaa::Memory::Threshold::Accounting : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: uint8

}; // Native::Aaa::Memory::Threshold::Accounting


class Native::Aaa::Memory::Threshold::Authentication : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf reject; //type: uint8

}; // Native::Aaa::Memory::Threshold::Authentication


class Native::Aaa::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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

        ydk::YLeaf interface_config; //type: InterfaceConfig
        class InterfaceConfig;

}; // Native::Aaa::Policy


class Native::Aaa::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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

        class Download; //type: Native::Aaa::Route::Download

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Route::Download> download;
        
}; // Native::Aaa::Route


class Native::Aaa::Route::Download : public ydk::Entity
{
    public:
        Download();
        ~Download();

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

        ydk::YLeaf update_period; //type: uint16
        ydk::YLeaf authorization; //type: string

}; // Native::Aaa::Route::Download


class Native::Privilege : public ydk::Entity
{
    public:
        Privilege();
        ~Privilege();

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

        class Exec; //type: Native::Privilege::Exec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Privilege::Exec> exec;
        
}; // Native::Privilege


class Native::Privilege::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

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

        class Level; //type: Native::Privilege::Exec::Level

        ydk::YList level;
        
}; // Native::Privilege::Exec


class Native::Privilege::Exec::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

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

        ydk::YLeaf privilege; //type: uint8
        class CommandList; //type: Native::Privilege::Exec::Level::CommandList

        ydk::YList command_list;
        
}; // Native::Privilege::Exec::Level


class Native::Privilege::Exec::Level::CommandList : public ydk::Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string

}; // Native::Privilege::Exec::Level::CommandList


class Native::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

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

        ydk::YLeaf delay; //type: uint8
        class OnFailure; //type: Native::Login::OnFailure
        class OnSuccess; //type: Native::Login::OnSuccess

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Login::OnFailure> on_failure; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Login::OnSuccess> on_success; // presence node
        
}; // Native::Login


class Native::Login::OnFailure : public ydk::Entity
{
    public:
        OnFailure();
        ~OnFailure();

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

        class Log; //type: Native::Login::OnFailure::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Login::OnFailure::Log> log; // presence node
        
}; // Native::Login::OnFailure


class Native::Login::OnFailure::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

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

        ydk::YLeaf every; //type: uint16

}; // Native::Login::OnFailure::Log


class Native::Login::OnSuccess : public ydk::Entity
{
    public:
        OnSuccess();
        ~OnSuccess();

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

        class Log; //type: Native::Login::OnSuccess::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Login::OnSuccess::Log> log; // presence node
        
}; // Native::Login::OnSuccess


class Native::Login::OnSuccess::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

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

        ydk::YLeaf every; //type: uint16

}; // Native::Login::OnSuccess::Log


class Native::Multilink : public ydk::Entity
{
    public:
        Multilink();
        ~Multilink();

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

        ydk::YLeaf bundle_name; //type: BundleName
        ydk::YLeaf virtual_template; //type: uint16
        class BundleName;

}; // Native::Multilink


class Native::MacAddressTable : public ydk::Entity
{
    public:
        MacAddressTable();
        ~MacAddressTable();

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

        class EvcXconnect; //type: Native::MacAddressTable::EvcXconnect
        class Limit; //type: Native::MacAddressTable::Limit
        class Learning; //type: Native::MacAddressTable::Learning

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MacAddressTable::EvcXconnect> evc_xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MacAddressTable::Limit> limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MacAddressTable::Learning> learning;
        
}; // Native::MacAddressTable


class Native::MacAddressTable::EvcXconnect : public ydk::Entity
{
    public:
        EvcXconnect();
        ~EvcXconnect();

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

        ydk::YLeaf l2pt_forward_all; //type: empty

}; // Native::MacAddressTable::EvcXconnect


class Native::MacAddressTable::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

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

        class Bdomain; //type: Native::MacAddressTable::Limit::Bdomain

        ydk::YList bdomain;
        
}; // Native::MacAddressTable::Limit


class Native::MacAddressTable::Limit::Bdomain : public ydk::Entity
{
    public:
        Bdomain();
        ~Bdomain();

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

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf action; //type: Action
        ydk::YLeaf maximum; //type: uint32
        class Action;

}; // Native::MacAddressTable::Limit::Bdomain


class Native::MacAddressTable::Learning : public ydk::Entity
{
    public:
        Learning();
        ~Learning();

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

        class Vlan; //type: Native::MacAddressTable::Learning::Vlan

        ydk::YList vlan;
        
}; // Native::MacAddressTable::Learning


class Native::MacAddressTable::Learning::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf module; //type: uint8

}; // Native::MacAddressTable::Learning::Vlan


class Native::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

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

        ydk::YLeaf maintenance_mode; //type: empty
        ydk::YLeaf mode; //type: Mode
        class MainCpu; //type: Native::Redundancy::MainCpu
        class Policy; //type: Native::Redundancy::Policy
        class Timer; //type: Native::Redundancy::Timer
        class Interchassis; //type: Native::Redundancy::Interchassis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu> main_cpu; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Timer> timer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis> interchassis;
                class Mode;

}; // Native::Redundancy


class Native::Redundancy::MainCpu : public ydk::Entity
{
    public:
        MainCpu();
        ~MainCpu();

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

        class AutoSync; //type: Native::Redundancy::MainCpu::AutoSync
        class Standby; //type: Native::Redundancy::MainCpu::Standby

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::AutoSync> auto_sync;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby> standby;
        
}; // Native::Redundancy::MainCpu


class Native::Redundancy::MainCpu::AutoSync : public ydk::Entity
{
    public:
        AutoSync();
        ~AutoSync();

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

        ydk::YLeaf running_config; //type: empty
        ydk::YLeaf config_register; //type: empty
        ydk::YLeaf bootvar; //type: empty
        ydk::YLeaf standard; //type: empty

}; // Native::Redundancy::MainCpu::AutoSync


class Native::Redundancy::MainCpu::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

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

        class Console; //type: Native::Redundancy::MainCpu::Standby::Console
        class Initialization; //type: Native::Redundancy::MainCpu::Standby::Initialization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Console> console;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Initialization> initialization;
        
}; // Native::Redundancy::MainCpu::Standby


class Native::Redundancy::MainCpu::Standby::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

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

        ydk::YLeaf enable; //type: empty

}; // Native::Redundancy::MainCpu::Standby::Console


class Native::Redundancy::MainCpu::Standby::Initialization : public ydk::Entity
{
    public:
        Initialization();
        ~Initialization();

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

        class Delay; //type: Native::Redundancy::MainCpu::Standby::Initialization::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Initialization::Delay> delay;
        
}; // Native::Redundancy::MainCpu::Standby::Initialization


class Native::Redundancy::MainCpu::Standby::Initialization::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

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

        ydk::YLeaf second; //type: uint16
        ydk::YLeaf boot_only; //type: empty

}; // Native::Redundancy::MainCpu::Standby::Initialization::Delay


class Native::Redundancy::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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

        class ConfigSync; //type: Native::Redundancy::Policy::ConfigSync

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync> config_sync;
        
}; // Native::Redundancy::Policy


class Native::Redundancy::Policy::ConfigSync : public ydk::Entity
{
    public:
        ConfigSync();
        ~ConfigSync();

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

        class Bulk; //type: Native::Redundancy::Policy::ConfigSync::Bulk
        class Lbl; //type: Native::Redundancy::Policy::ConfigSync::Lbl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Bulk> bulk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Lbl> lbl;
        
}; // Native::Redundancy::Policy::ConfigSync


class Native::Redundancy::Policy::ConfigSync::Bulk : public ydk::Entity
{
    public:
        Bulk();
        ~Bulk();

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

        class Prc; //type: Native::Redundancy::Policy::ConfigSync::Bulk::Prc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Bulk::Prc> prc;
        
}; // Native::Redundancy::Policy::ConfigSync::Bulk


class Native::Redundancy::Policy::ConfigSync::Bulk::Prc : public ydk::Entity
{
    public:
        Prc();
        ~Prc();

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

        ydk::YLeaf reload; //type: boolean

}; // Native::Redundancy::Policy::ConfigSync::Bulk::Prc


class Native::Redundancy::Policy::ConfigSync::Lbl : public ydk::Entity
{
    public:
        Lbl();
        ~Lbl();

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

        class Prc; //type: Native::Redundancy::Policy::ConfigSync::Lbl::Prc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Lbl::Prc> prc;
        
}; // Native::Redundancy::Policy::ConfigSync::Lbl


class Native::Redundancy::Policy::ConfigSync::Lbl::Prc : public ydk::Entity
{
    public:
        Prc();
        ~Prc();

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

        ydk::YLeaf reload; //type: boolean

}; // Native::Redundancy::Policy::ConfigSync::Lbl::Prc


class Native::Redundancy::Timer : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rpso; //type: uint16

}; // Native::Redundancy::Timer


class Native::Redundancy::Interchassis : public ydk::Entity
{
    public:
        Interchassis();
        ~Interchassis();

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

        class Group; //type: Native::Redundancy::Interchassis::Group

        ydk::YList group;
        
}; // Native::Redundancy::Interchassis


class Native::Redundancy::Interchassis::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf group_number; //type: uint64
        class Monitor; //type: Native::Redundancy::Interchassis::Group::Monitor
        class Member; //type: Native::Redundancy::Interchassis::Group::Member
        class Backbone; //type: Native::Redundancy::Interchassis::Group::Backbone

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Member> member;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone> backbone;
        
}; // Native::Redundancy::Interchassis::Group


class Native::Redundancy::Interchassis::Group::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: empty
        ydk::YLeaf bfd; //type: empty

}; // Native::Redundancy::Interchassis::Group::Monitor


class Native::Redundancy::Interchassis::Group::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string

}; // Native::Redundancy::Interchassis::Group::Member


class Native::Redundancy::Interchassis::Group::Backbone : public ydk::Entity
{
    public:
        Backbone();
        ~Backbone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface> interface;
        
}; // Native::Redundancy::Interchassis::Group::Backbone


class Native::Redundancy::Interchassis::Group::Backbone::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Redundancy::Interchassis::Group::Backbone::Interface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface


class Native::Scheduler : public ydk::Entity
{
    public:
        Scheduler();
        ~Scheduler();

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

        class Runtime; //type: Native::Scheduler::Runtime
        class Allocate; //type: Native::Scheduler::Allocate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Scheduler::Runtime> runtime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Scheduler::Allocate> allocate;
        
}; // Native::Scheduler


class Native::Scheduler::Runtime : public ydk::Entity
{
    public:
        Runtime();
        ~Runtime();

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

        ydk::YLeaf netinput; //type: uint16

}; // Native::Scheduler::Runtime


class Native::Scheduler::Allocate : public ydk::Entity
{
    public:
        Allocate();
        ~Allocate();

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

        ydk::YLeaf interrupt_time; //type: uint16
        ydk::YLeaf process_time; //type: uint16

}; // Native::Scheduler::Allocate


class Native::Epm : public ydk::Entity
{
    public:
        Epm();
        ~Epm();

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

        ydk::YLeaf logging; //type: empty

}; // Native::Epm


class Native::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

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

        ydk::YLeaf backbonefast; //type: empty
        ydk::YLeaf logging; //type: empty
        ydk::YLeaf mode; //type: Mode
        class Bridge; //type: Native::SpanningTree::Bridge
        class Etherchannel; //type: Native::SpanningTree::Etherchannel
        class Extend; //type: Native::SpanningTree::Extend
        class Loopguard; //type: Native::SpanningTree::Loopguard
        class Mst; //type: Native::SpanningTree::Mst
        class Optimize; //type: Native::SpanningTree::Optimize
        class Pathcost; //type: Native::SpanningTree::Pathcost
        class Portfast; //type: Native::SpanningTree::Portfast
        class Transmit; //type: Native::SpanningTree::Transmit
        class Uplinkfast; //type: Native::SpanningTree::Uplinkfast
        class Vlan; //type: Native::SpanningTree::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Bridge> bridge;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Etherchannel> etherchannel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Extend> extend;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Mst> mst;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Optimize> optimize;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Pathcost> pathcost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Portfast> portfast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Transmit> transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Uplinkfast> uplinkfast; // presence node
        ydk::YList vlan;
                class Mode;

}; // Native::SpanningTree


class Native::SpanningTree::Bridge : public ydk::Entity
{
    public:
        Bridge();
        ~Bridge();

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

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf id; //type: string
        ydk::YLeaf assurance; //type: boolean

}; // Native::SpanningTree::Bridge


class Native::SpanningTree::Etherchannel : public ydk::Entity
{
    public:
        Etherchannel();
        ~Etherchannel();

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

        class Guard; //type: Native::SpanningTree::Etherchannel::Guard

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Etherchannel::Guard> guard;
        
}; // Native::SpanningTree::Etherchannel


class Native::SpanningTree::Etherchannel::Guard : public ydk::Entity
{
    public:
        Guard();
        ~Guard();

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

        ydk::YLeaf misconfig; //type: boolean

}; // Native::SpanningTree::Etherchannel::Guard


class Native::SpanningTree::Extend : public ydk::Entity
{
    public:
        Extend();
        ~Extend();

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

        ydk::YLeaf system_id; //type: empty

}; // Native::SpanningTree::Extend


class Native::SpanningTree::Loopguard : public ydk::Entity
{
    public:
        Loopguard();
        ~Loopguard();

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

        ydk::YLeaf default_; //type: empty

}; // Native::SpanningTree::Loopguard


class Native::SpanningTree::Mst : public ydk::Entity
{
    public:
        Mst();
        ~Mst();

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

        ydk::YLeaf forward_time; //type: uint8
        ydk::YLeaf hello_time; //type: uint8
        ydk::YLeaf max_age; //type: uint8
        ydk::YLeaf max_hops; //type: uint8
        class InstanceRange; //type: Native::SpanningTree::Mst::InstanceRange
        class Configuration; //type: Native::SpanningTree::Mst::Configuration

        ydk::YList instance_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Mst::Configuration> configuration;
        
}; // Native::SpanningTree::Mst


class Native::SpanningTree::Mst::InstanceRange : public ydk::Entity
{
    public:
        InstanceRange();
        ~InstanceRange();

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

        ydk::YLeaf id; //type: one of uint16, string
        ydk::YLeaf priority; //type: uint16
        ydk::YLeaf root; //type: Root
        class Root;

}; // Native::SpanningTree::Mst::InstanceRange


class Native::SpanningTree::Mst::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf revision; //type: uint16
        class Instance; //type: Native::SpanningTree::Mst::Configuration::Instance
        class PrivateVlan; //type: Native::SpanningTree::Mst::Configuration::PrivateVlan

        ydk::YList instance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Mst::Configuration::PrivateVlan> private_vlan;
        
}; // Native::SpanningTree::Mst::Configuration


class Native::SpanningTree::Mst::Configuration::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

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

        ydk::YLeaf id; //type: uint16
        ydk::YLeafList vlan; //type: list of  one of uint16, string

}; // Native::SpanningTree::Mst::Configuration::Instance


class Native::SpanningTree::Mst::Configuration::PrivateVlan : public ydk::Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

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

        ydk::YLeaf synchronize; //type: empty

}; // Native::SpanningTree::Mst::Configuration::PrivateVlan


class Native::SpanningTree::Optimize : public ydk::Entity
{
    public:
        Optimize();
        ~Optimize();

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

        class Bpdu; //type: Native::SpanningTree::Optimize::Bpdu

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Optimize::Bpdu> bpdu;
        
}; // Native::SpanningTree::Optimize


class Native::SpanningTree::Optimize::Bpdu : public ydk::Entity
{
    public:
        Bpdu();
        ~Bpdu();

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

        ydk::YLeaf transmission; //type: boolean

}; // Native::SpanningTree::Optimize::Bpdu


class Native::SpanningTree::Pathcost : public ydk::Entity
{
    public:
        Pathcost();
        ~Pathcost();

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

        class Method; //type: Native::SpanningTree::Pathcost::Method

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Pathcost::Method> method;
        
}; // Native::SpanningTree::Pathcost


class Native::SpanningTree::Pathcost::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

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

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf short_; //type: empty

}; // Native::SpanningTree::Pathcost::Method


class Native::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

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

        ydk::YLeaf default_; //type: empty
        class Bpdufilter; //type: Native::SpanningTree::Portfast::Bpdufilter
        class Bpduguard; //type: Native::SpanningTree::Portfast::Bpduguard

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Portfast::Bpdufilter> bpdufilter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Portfast::Bpduguard> bpduguard;
        
}; // Native::SpanningTree::Portfast


class Native::SpanningTree::Portfast::Bpdufilter : public ydk::Entity
{
    public:
        Bpdufilter();
        ~Bpdufilter();

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

        ydk::YLeaf default_; //type: empty

}; // Native::SpanningTree::Portfast::Bpdufilter


class Native::SpanningTree::Portfast::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

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

        ydk::YLeaf default_; //type: empty

}; // Native::SpanningTree::Portfast::Bpduguard


class Native::SpanningTree::Transmit : public ydk::Entity
{
    public:
        Transmit();
        ~Transmit();

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

        ydk::YLeaf hold_count; //type: uint8

}; // Native::SpanningTree::Transmit


class Native::SpanningTree::Uplinkfast : public ydk::Entity
{
    public:
        Uplinkfast();
        ~Uplinkfast();

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

        ydk::YLeaf max_update_rate; //type: uint32

}; // Native::SpanningTree::Uplinkfast


class Native::SpanningTree::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf max_age; //type: uint8
        ydk::YLeaf forward_time; //type: uint8
        ydk::YLeaf hello_time; //type: uint8
        ydk::YLeaf priority; //type: uint16
        class Root; //type: Native::SpanningTree::Vlan::Root

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root> root;
        
}; // Native::SpanningTree::Vlan


class Native::SpanningTree::Vlan::Root : public ydk::Entity
{
    public:
        Root();
        ~Root();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Primary; //type: Native::SpanningTree::Vlan::Root::Primary
        class Secondary; //type: Native::SpanningTree::Vlan::Root::Secondary

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root::Primary> primary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root::Secondary> secondary;
        
}; // Native::SpanningTree::Vlan::Root


class Native::SpanningTree::Vlan::Root::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf hello_time; //type: uint8

}; // Native::SpanningTree::Vlan::Root::Primary


class Native::SpanningTree::Vlan::Root::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf hello_time; //type: uint8

}; // Native::SpanningTree::Vlan::Root::Secondary


class Native::Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

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

        ydk::YLeaf templating; //type: empty

}; // Native::Subscriber


class Native::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

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

        class TrackedObject; //type: Native::Track::TrackedObject
        class Resolution; //type: Native::Track::Resolution
        class Timer; //type: Native::Track::Timer

        ydk::YList tracked_object;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Resolution> resolution;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer> timer;
        
}; // Native::Track


class Native::Track::TrackedObject : public ydk::Entity
{
    public:
        TrackedObject();
        ~TrackedObject();

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

        ydk::YLeaf object_number; //type: uint32
        ydk::YLeaf stub_object; //type: empty
        ydk::YLeaf default_state; //type: DefaultState
        class Interface; //type: Native::Track::TrackedObject::Interface
        class Ip; //type: Native::Track::TrackedObject::Ip
        class Ipv6; //type: Native::Track::TrackedObject::Ipv6
        class List; //type: Native::Track::TrackedObject::List
        class Default; //type: Native::Track::TrackedObject::Default
        class Delay; //type: Native::Track::TrackedObject::Delay
        class Object; //type: Native::Track::TrackedObject::Object
        class Ipv6Object; //type: Native::Track::TrackedObject::Ipv6Object
        class IpObject; //type: Native::Track::TrackedObject::IpObject

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Delay> delay;
        ydk::YList object;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ipv6Object> ipv6_object;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::IpObject> ip_object;
                class DefaultState;

}; // Native::Track::TrackedObject


class Native::Track::TrackedObject::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf routing; //type: empty
        class Protocol;

}; // Native::Track::TrackedObject::Interface


class Native::Track::TrackedObject::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: Native::Track::TrackedObject::Ip::Route
        class Sla; //type: Native::Track::TrackedObject::Ip::Sla

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ip::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ip::Sla> sla;
        
}; // Native::Track::TrackedObject::Ip


class Native::Track::TrackedObject::Ip::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf reachability; //type: empty
        ydk::YLeaf metric; //type: Metric
        class Metric;

}; // Native::Track::TrackedObject::Ip::Route


class Native::Track::TrackedObject::Ip::Sla : public ydk::Entity
{
    public:
        Sla();
        ~Sla();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf reachability; //type: empty
        ydk::YLeaf state; //type: empty

}; // Native::Track::TrackedObject::Ip::Sla


class Native::Track::TrackedObject::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: Native::Track::TrackedObject::Ipv6::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ipv6::Route> route;
        
}; // Native::Track::TrackedObject::Ipv6


class Native::Track::TrackedObject::Ipv6::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf reachability; //type: empty
        ydk::YLeaf metric; //type: Metric
        class Metric;

}; // Native::Track::TrackedObject::Ipv6::Route


class Native::Track::TrackedObject::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf boolean; //type: Boolean
        ydk::YLeaf threshold; //type: Threshold
        class Boolean;
        class Threshold;

}; // Native::Track::TrackedObject::List


class Native::Track::TrackedObject::Default : public ydk::Entity
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

        ydk::YLeaf default_state; //type: DefaultState
        class Delay; //type: Native::Track::TrackedObject::Default::Delay
        class Ip; //type: Native::Track::TrackedObject::Default::Ip
        class Ipv6; //type: Native::Track::TrackedObject::Default::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Default::Delay> delay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Default::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Default::Ipv6> ipv6;
                class DefaultState;

}; // Native::Track::TrackedObject::Default


class Native::Track::TrackedObject::Default::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Track::TrackedObject::Default::Delay


class Native::Track::TrackedObject::Default::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: empty

}; // Native::Track::TrackedObject::Default::Ip


class Native::Track::TrackedObject::Default::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: empty

}; // Native::Track::TrackedObject::Default::Ipv6


class Native::Track::TrackedObject::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf down; //type: uint32
        ydk::YLeaf up; //type: uint32

}; // Native::Track::TrackedObject::Delay


class Native::Track::TrackedObject::Object : public ydk::Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf not_; //type: empty

}; // Native::Track::TrackedObject::Object


class Native::Track::TrackedObject::Ipv6Object : public ydk::Entity
{
    public:
        Ipv6Object();
        ~Ipv6Object();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Track::TrackedObject::Ipv6Object


class Native::Track::TrackedObject::IpObject : public ydk::Entity
{
    public:
        IpObject();
        ~IpObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Track::TrackedObject::IpObject


class Native::Track::Resolution : public ydk::Entity
{
    public:
        Resolution();
        ~Resolution();

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

        class Ip; //type: Native::Track::Resolution::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Resolution::Ip> ip;
        
}; // Native::Track::Resolution


class Native::Track::Resolution::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

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

        class Route; //type: Native::Track::Resolution::Ip::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Resolution::Ip::Route> route;
        
}; // Native::Track::Resolution::Ip


class Native::Track::Resolution::Ip::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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

        ydk::YLeaf bgp; //type: uint32
        ydk::YLeaf eigrp; //type: uint32
        ydk::YLeaf isis; //type: uint32
        ydk::YLeaf ospf; //type: uint32
        ydk::YLeaf static_; //type: uint32

}; // Native::Track::Resolution::Ip::Route


class Native::Track::Timer : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: Native::Track::Timer::Interface
        class Ip; //type: Native::Track::Timer::Ip
        class Ipv6; //type: Native::Track::Timer::Ipv6
        class List; //type: Native::Track::Timer::List
        class StubObject; //type: Native::Track::Timer::StubObject

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::StubObject> stub_object;
        
}; // Native::Track::Timer


class Native::Track::Timer::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::Interface


class Native::Track::Timer::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

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

        class Route; //type: Native::Track::Timer::Ip::Route
        class Sla; //type: Native::Track::Timer::Ip::Sla

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Ip::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Ip::Sla> sla;
        
}; // Native::Track::Timer::Ip


class Native::Track::Timer::Ip::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::Ip::Route


class Native::Track::Timer::Ip::Sla : public ydk::Entity
{
    public:
        Sla();
        ~Sla();

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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::Ip::Sla


class Native::Track::Timer::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        class Route; //type: Native::Track::Timer::Ipv6::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Ipv6::Route> route;
        
}; // Native::Track::Timer::Ipv6

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::Sesm::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::Sesm::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Login::Display : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf last_failure;
        static const ydk::Enum::YLeaf last_success;
        static const ydk::Enum::YLeaf number_failures;

};

class Native::Aaa::Policy::InterfaceConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf allow_subinterface;

};

class Native::Multilink::BundleName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf authenticated;
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf endpoint;
        static const ydk::Enum::YLeaf rfc;

};

class Native::MacAddressTable::Limit::Bdomain::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf limit;
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Redundancy::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rpr;
        static const ydk::Enum::YLeaf rpr_plus;
        static const ydk::Enum::YLeaf sso;
        static const ydk::Enum::YLeaf none;

};

class Native::SpanningTree::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mst;
        static const ydk::Enum::YLeaf pvst;
        static const ydk::Enum::YLeaf rapid_pvst;

};

class Native::SpanningTree::Mst::InstanceRange::Root : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

};

class Native::Track::TrackedObject::DefaultState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class Native::Track::TrackedObject::Interface::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf line_protocol;

};

class Native::Track::TrackedObject::Ip::Route::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf threshold;

};

class Native::Track::TrackedObject::Ipv6::Route::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf threshold;

};

class Native::Track::TrackedObject::List::Boolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf and_;
        static const ydk::Enum::YLeaf or_;

};

class Native::Track::TrackedObject::List::Threshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf percentage;
        static const ydk::Enum::YLeaf weight;

};

class Native::Track::TrackedObject::Default::DefaultState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_111_ */


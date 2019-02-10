#ifndef _CISCO_IOS_XE_NATIVE_70_
#define _CISCO_IOS_XE_NATIVE_70_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_65.hpp"
#include "Cisco_IOS_XE_native_69.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::FortyGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString


class Native::Interface::FortyGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1 : public ydk::Entity
{
    public:
        Sha1();
        ~Sha1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1


class Native::Interface::FortyGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::FortyGigabitEthernet::Ospfv3::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Bfd


class Native::Interface::FortyGigabitEthernet::Ospfv3::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Cost


class Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic


class Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis : public ydk::Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis


class Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Factor; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight


class Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor : public ydk::Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor


class Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency : public ydk::Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency


class Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources


class Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput : public ydk::Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput


class Native::Interface::FortyGigabitEthernet::Ospfv3::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::DatabaseFilter


class Native::Interface::FortyGigabitEthernet::Ospfv3::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::DemandCircuit


class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption


class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spi; //type: uint64
        ydk::YLeaf esp; //type: empty
        class Ipsec3des; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des
        class AesCbc; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des> ipsec_3des;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc> aes_cbc;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec


class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des : public ydk::Entity
{
    public:
        Ipsec3des();
        ~Ipsec3des();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString> key_string;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des


class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString


class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc : public ydk::Entity
{
    public:
        AesCbc();
        ~AesCbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AesCbc128; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc


class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128 : public ydk::Entity
{
    public:
        AesCbc128();
        ~AesCbc128();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192 : public ydk::Entity
{
    public:
        Aes192();
        ~Aes192();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256 : public ydk::Entity
{
    public:
        Aes256();
        ~Aes256();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::FortyGigabitEthernet::Ospfv3::Manet : public ydk::Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peering; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Manet::Peering> peering;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Manet


class Native::Interface::FortyGigabitEthernet::Ospfv3::Manet::Peering : public ydk::Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Manet::Peering::Cost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Manet::Peering::Cost> cost;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Manet::Peering


class Native::Interface::FortyGigabitEthernet::Ospfv3::Manet::Peering::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Manet::Peering::Cost


class Native::Interface::FortyGigabitEthernet::Ospfv3::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf cost; //type: uint32

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::MultiArea


class Native::Interface::FortyGigabitEthernet::Ospfv3::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Neighbor


class Native::Interface::FortyGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter


class Native::Interface::FortyGigabitEthernet::Ospfv3::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf manet; //type: empty
        ydk::YLeaf non_broadcast; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::FortyGigabitEthernet::Ospfv3::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ospfv3::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Network


class Native::Interface::FortyGigabitEthernet::Ospfv3::Network::PointToMultipoint : public ydk::Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_broadcast; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::Network::PointToMultipoint


class Native::Interface::FortyGigabitEthernet::Ospfv3::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Ospfv3::PrefixSuppression


class Native::Interface::FortyGigabitEthernet::Performance : public ydk::Entity
{
    public:
        Performance();
        ~Performance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Monitor; //type: Native::Interface::FortyGigabitEthernet::Performance::Monitor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Performance::Monitor> monitor;
        
}; // Native::Interface::FortyGigabitEthernet::Performance


class Native::Interface::FortyGigabitEthernet::Performance::Monitor : public ydk::Entity
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

        ydk::YLeafList context; //type: list of  string

}; // Native::Interface::FortyGigabitEthernet::Performance::Monitor


class Native::Interface::FortyGigabitEthernet::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_subnet_mode; //type: empty
        class Mobility; //type: Native::Interface::FortyGigabitEthernet::Lisp::Mobility

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Lisp::Mobility> mobility;
        
}; // Native::Interface::FortyGigabitEthernet::Lisp


class Native::Interface::FortyGigabitEthernet::Lisp::Mobility : public ydk::Entity
{
    public:
        Mobility();
        ~Mobility();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DynamicEid; //type: Native::Interface::FortyGigabitEthernet::Lisp::Mobility::DynamicEid
        class Discover; //type: Native::Interface::FortyGigabitEthernet::Lisp::Mobility::Discover
        class Liveness; //type: Native::Interface::FortyGigabitEthernet::Lisp::Mobility::Liveness

        ydk::YList dynamic_eid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Lisp::Mobility::Discover> discover;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Lisp::Mobility::Liveness> liveness;
        
}; // Native::Interface::FortyGigabitEthernet::Lisp::Mobility


class Native::Interface::FortyGigabitEthernet::Lisp::Mobility::DynamicEid : public ydk::Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic_eid_name; //type: string
        class NbrProxyReply; //type: Native::Interface::FortyGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply> nbr_proxy_reply; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Lisp::Mobility::DynamicEid


class Native::Interface::FortyGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply : public ydk::Entity
{
    public:
        NbrProxyReply();
        ~NbrProxyReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf requests; //type: uint8

}; // Native::Interface::FortyGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply


class Native::Interface::FortyGigabitEthernet::Lisp::Mobility::Discover : public ydk::Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf arp; //type: boolean

}; // Native::Interface::FortyGigabitEthernet::Lisp::Mobility::Discover


class Native::Interface::FortyGigabitEthernet::Lisp::Mobility::Liveness : public ydk::Entity
{
    public:
        Liveness();
        ~Liveness();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test; //type: boolean
        ydk::YLeaf ttl; //type: uint8

}; // Native::Interface::FortyGigabitEthernet::Lisp::Mobility::Liveness


class Native::Interface::FortyGigabitEthernet::SpanningTree : public ydk::Entity
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

        ydk::YLeaf bpdufilter; //type: Bpdufilter
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf guard; //type: Guard
        ydk::YLeaf link_type; //type: LinkType
        ydk::YLeaf port_priority; //type: uint8
        class Bpduguard; //type: Native::Interface::FortyGigabitEthernet::SpanningTree::Bpduguard
        class Portfast; //type: Native::Interface::FortyGigabitEthernet::SpanningTree::Portfast
        class Vlan; //type: Native::Interface::FortyGigabitEthernet::SpanningTree::Vlan
        class Loopguard; //type: Native::Interface::FortyGigabitEthernet::SpanningTree::Loopguard
        class Mst; //type: Native::Interface::FortyGigabitEthernet::SpanningTree::Mst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::SpanningTree::Portfast> portfast; // presence node
        ydk::YList vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::SpanningTree::Mst> mst;
                class Bpdufilter;
        class Guard;
        class LinkType;

}; // Native::Interface::FortyGigabitEthernet::SpanningTree


class Native::Interface::FortyGigabitEthernet::SpanningTree::Bpduguard : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty

}; // Native::Interface::FortyGigabitEthernet::SpanningTree::Bpduguard


class Native::Interface::FortyGigabitEthernet::SpanningTree::Portfast : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf edge; //type: empty

}; // Native::Interface::FortyGigabitEthernet::SpanningTree::Portfast


class Native::Interface::FortyGigabitEthernet::SpanningTree::Vlan : public ydk::Entity
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

        ydk::YLeaf vlan_ids; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf port_priority; //type: uint16

}; // Native::Interface::FortyGigabitEthernet::SpanningTree::Vlan


class Native::Interface::FortyGigabitEthernet::SpanningTree::Loopguard : public ydk::Entity
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

        ydk::YLeaf default_; //type: empty

}; // Native::Interface::FortyGigabitEthernet::SpanningTree::Loopguard


class Native::Interface::FortyGigabitEthernet::SpanningTree::Mst : public ydk::Entity
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

        ydk::YLeaf pre_standard; //type: empty
        class MstInstance; //type: Native::Interface::FortyGigabitEthernet::SpanningTree::Mst::MstInstance

        ydk::YList mst_instance;
        
}; // Native::Interface::FortyGigabitEthernet::SpanningTree::Mst


class Native::Interface::FortyGigabitEthernet::SpanningTree::Mst::MstInstance : public ydk::Entity
{
    public:
        MstInstance();
        ~MstInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf port_priority; //type: uint16

}; // Native::Interface::FortyGigabitEthernet::SpanningTree::Mst::MstInstance


class Native::Interface::FortyGigabitEthernet::Mka : public ydk::Entity
{
    public:
        Mka();
        ~Mka();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Native::Interface::FortyGigabitEthernet::Mka::Policy
        class PreSharedKey; //type: Native::Interface::FortyGigabitEthernet::Mka::PreSharedKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mka::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mka::PreSharedKey> pre_shared_key;
        
}; // Native::Interface::FortyGigabitEthernet::Mka


class Native::Interface::FortyGigabitEthernet::Mka::Policy : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Interface::FortyGigabitEthernet::Mka::Policy


class Native::Interface::FortyGigabitEthernet::Mka::PreSharedKey : public ydk::Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyChain; //type: Native::Interface::FortyGigabitEthernet::Mka::PreSharedKey::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mka::PreSharedKey::KeyChain> key_chain;
        
}; // Native::Interface::FortyGigabitEthernet::Mka::PreSharedKey


class Native::Interface::FortyGigabitEthernet::Mka::PreSharedKey::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

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

}; // Native::Interface::FortyGigabitEthernet::Mka::PreSharedKey::KeyChain


class Native::Interface::FortyGigabitEthernet::Umbrella : public ydk::Entity
{
    public:
        Umbrella();
        ~Umbrella();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: empty
        ydk::YLeaf in; //type: string

}; // Native::Interface::FortyGigabitEthernet::Umbrella


class Native::Interface::FortyGigabitEthernet::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

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
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf manual; //type: empty
        ydk::YLeaf sequence; //type: Sequence
        ydk::YLeaf pw_class; //type: string
        class Encapsulation;
        class Sequence;

}; // Native::Interface::FortyGigabitEthernet::Xconnect


class Native::Interface::FortyGigabitEthernet::Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EthernetSegment; //type: Native::Interface::FortyGigabitEthernet::Evpn::EthernetSegment

        ydk::YList ethernet_segment;
        
}; // Native::Interface::FortyGigabitEthernet::Evpn


class Native::Interface::FortyGigabitEthernet::Evpn::EthernetSegment : public ydk::Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf es_value; //type: uint16
        ydk::YLeaf sytem_mac; //type: string
        class DfElection; //type: Native::Interface::FortyGigabitEthernet::Evpn::EthernetSegment::DfElection
        class Redundancy; //type: Native::Interface::FortyGigabitEthernet::Evpn::EthernetSegment::Redundancy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Evpn::EthernetSegment::DfElection> df_election;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Evpn::EthernetSegment::Redundancy> redundancy;
        
}; // Native::Interface::FortyGigabitEthernet::Evpn::EthernetSegment


class Native::Interface::FortyGigabitEthernet::Evpn::EthernetSegment::DfElection : public ydk::Entity
{
    public:
        DfElection();
        ~DfElection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_time; //type: uint8

}; // Native::Interface::FortyGigabitEthernet::Evpn::EthernetSegment::DfElection


class Native::Interface::FortyGigabitEthernet::Evpn::EthernetSegment::Redundancy : public ydk::Entity
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

        ydk::YLeaf all_active; //type: empty
        ydk::YLeaf single_active; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Evpn::EthernetSegment::Redundancy


class Native::Interface::FortyGigabitEthernet::Dot1x : public ydk::Entity
{
    public:
        Dot1x();
        ~Dot1x();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf credentials; //type: string
        ydk::YLeaf max_reauth_req; //type: uint8
        ydk::YLeaf max_req; //type: uint8
        ydk::YLeaf max_start; //type: uint8
        ydk::YLeaf pae; //type: Pae
        class Authenticator; //type: Native::Interface::FortyGigabitEthernet::Dot1x::Authenticator
        class Supplicant; //type: Native::Interface::FortyGigabitEthernet::Dot1x::Supplicant
        class Timeout; //type: Native::Interface::FortyGigabitEthernet::Dot1x::Timeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Dot1x::Authenticator> authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Dot1x::Supplicant> supplicant;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Dot1x::Timeout> timeout;
                class Pae;

}; // Native::Interface::FortyGigabitEthernet::Dot1x


class Native::Interface::FortyGigabitEthernet::Dot1x::Authenticator : public ydk::Entity
{
    public:
        Authenticator();
        ~Authenticator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eap; //type: Native::Interface::FortyGigabitEthernet::Dot1x::Authenticator::Eap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Dot1x::Authenticator::Eap> eap;
        
}; // Native::Interface::FortyGigabitEthernet::Dot1x::Authenticator


class Native::Interface::FortyGigabitEthernet::Dot1x::Authenticator::Eap : public ydk::Entity
{
    public:
        Eap();
        ~Eap();

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

}; // Native::Interface::FortyGigabitEthernet::Dot1x::Authenticator::Eap


class Native::Interface::FortyGigabitEthernet::Dot1x::Supplicant : public ydk::Entity
{
    public:
        Supplicant();
        ~Supplicant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eap; //type: Native::Interface::FortyGigabitEthernet::Dot1x::Supplicant::Eap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Dot1x::Supplicant::Eap> eap;
        
}; // Native::Interface::FortyGigabitEthernet::Dot1x::Supplicant


class Native::Interface::FortyGigabitEthernet::Dot1x::Supplicant::Eap : public ydk::Entity
{
    public:
        Eap();
        ~Eap();

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

}; // Native::Interface::FortyGigabitEthernet::Dot1x::Supplicant::Eap


class Native::Interface::FortyGigabitEthernet::Dot1x::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_period; //type: uint16
        ydk::YLeaf held_period; //type: uint16
        ydk::YLeaf quiet_period; //type: uint16
        ydk::YLeaf ratelimit_period; //type: uint16
        ydk::YLeaf server_timeout; //type: uint16
        ydk::YLeaf start_period; //type: uint16
        ydk::YLeaf supp_timeout; //type: uint16
        ydk::YLeaf tx_period; //type: uint16

}; // Native::Interface::FortyGigabitEthernet::Dot1x::Timeout


class Native::Interface::FortyGigabitEthernet::Crypto : public ydk::Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Map; //type: Native::Interface::FortyGigabitEthernet::Crypto::Map
        class Ipsec; //type: Native::Interface::FortyGigabitEthernet::Crypto::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Crypto::Map> map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Crypto::Ipsec> ipsec;
        
}; // Native::Interface::FortyGigabitEthernet::Crypto


class Native::Interface::FortyGigabitEthernet::Crypto::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: string
        ydk::YLeaf redundancy; //type: string
        ydk::YLeaf stateful; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Crypto::Map


class Native::Interface::FortyGigabitEthernet::Crypto::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf df_bit; //type: DfBit
        ydk::YLeaf fragmentation; //type: Fragmentation
        class DfBit;
        class Fragmentation;

}; // Native::Interface::FortyGigabitEthernet::Crypto::Ipsec


class Native::Interface::FortyGigabitEthernet::Lldp : public ydk::Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf transmit; //type: boolean

}; // Native::Interface::FortyGigabitEthernet::Lldp


class Native::Interface::FortyGigabitEthernet::ZoneMember : public ydk::Entity
{
    public:
        ZoneMember();
        ~ZoneMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security; //type: string

}; // Native::Interface::FortyGigabitEthernet::ZoneMember


class Native::Interface::FortyGigabitEthernet::Vrrp : public ydk::Entity
{
    public:
        Vrrp();
        ~Vrrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrrpGroup; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup
        class VrrpGroupV2; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2
        class Delay; //type: Native::Interface::FortyGigabitEthernet::Vrrp::Delay

        ydk::YList vrrp_group;
        ydk::YList vrrp_group_v2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::Delay> delay;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup : public ydk::Entity
{
    public:
        VrrpGroup();
        ~VrrpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: uint8
        class AddressFamily; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily> address_family;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4
        class Ipv6; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6> ipv6; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrrpv2; //type: empty
        ydk::YLeaf description; //type: string
        ydk::YLeaf match_address; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf shutdown; //type: empty
        class Address; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address
        class Preempt; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt
        class Timers; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers
        class Track; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track
        class Vrrs; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt> preempt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track> track;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs> vrrs;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Primary; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary
        class Secondary; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary> primary;
        ydk::YList secondary;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf primary; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay> delay;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay : public ydk::Entity
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

        ydk::YLeaf minimum; //type: uint16

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertise; //type: uint16

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track : public ydk::Entity
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

        class Event; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event

        ydk::YList event;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_id; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs : public ydk::Entity
{
    public:
        Vrrs();
        ~Vrrs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf leader; //type: string

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6 : public ydk::Entity
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

        ydk::YLeaf description; //type: string
        ydk::YLeaf match_address; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf shutdown; //type: empty
        class Address; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address
        class Preempt; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt
        class Timers; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers
        class Track; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track
        class Vrrs; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt> preempt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track> track;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs> vrrs;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Primary; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary
        class Ipv6Prefix; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary> primary;
        ydk::YList ipv6_prefix;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary : public ydk::Entity
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

        ydk::YLeaf ipv6_link_local; //type: string
        ydk::YLeaf primary; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix : public ydk::Entity
{
    public:
        Ipv6Prefix();
        ~Ipv6Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay> delay;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay : public ydk::Entity
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

        ydk::YLeaf minimum; //type: uint16

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertise; //type: uint16

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track : public ydk::Entity
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

        class Event; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event

        ydk::YList event;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_id; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs : public ydk::Entity
{
    public:
        Vrrs();
        ~Vrrs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf leader; //type: string

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2 : public ydk::Entity
{
    public:
        VrrpGroupV2();
        ~VrrpGroupV2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf shutdown; //type: empty
        class Authentication; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Authentication
        class Ip; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Ip
        class Preempt; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Preempt
        class Timers; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Timers
        class Track; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Track

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Preempt> preempt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Track> track;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Authentication : public ydk::Entity
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

        ydk::YLeaf text; //type: string

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Authentication


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Ip : public ydk::Entity
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

        class VrrpIpv4; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Ip::VrrpIpv4

        ydk::YList vrrp_ipv4;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Ip


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Ip::VrrpIpv4 : public ydk::Entity
{
    public:
        VrrpIpv4();
        ~VrrpIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Ip::VrrpIpv4


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay> delay;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Preempt


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay : public ydk::Entity
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

        ydk::YLeaf minimum; //type: uint16

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf learn; //type: empty
        class Advertise; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise> advertise;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Timers


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Track : public ydk::Entity
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

        class Event; //type: Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event

        ydk::YList event;
        
}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Track


class Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_id; //type: uint16
        ydk::YLeaf decrement; //type: uint8

}; // Native::Interface::FortyGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event


class Native::Interface::FortyGigabitEthernet::Vrrp::Delay : public ydk::Entity
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

        ydk::YLeaf reload; //type: uint16
        ydk::YLeaf minimum; //type: uint16

}; // Native::Interface::FortyGigabitEthernet::Vrrp::Delay


class Native::Interface::FortyGigabitEthernet::FabricDomain : public ydk::Entity
{
    public:
        FabricDomain();
        ~FabricDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IwanFabric; //type: Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric> iwan_fabric;
        
}; // Native::Interface::FortyGigabitEthernet::FabricDomain


class Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric : public ydk::Entity
{
    public:
        IwanFabric();
        ~IwanFabric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Word; //type: Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric::Word

        ydk::YList word;
        
}; // Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric


class Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric::Word : public ydk::Entity
{
    public:
        Word();
        ~Word();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf interface_id; //type: uint8

}; // Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric::Word


class Native::Interface::FortyGigabitEthernet::AnalysisModule : public ydk::Entity
{
    public:
        AnalysisModule();
        ~AnalysisModule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Monitoring; //type: Native::Interface::FortyGigabitEthernet::AnalysisModule::Monitoring

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::AnalysisModule::Monitoring> monitoring;
        
}; // Native::Interface::FortyGigabitEthernet::AnalysisModule


class Native::Interface::FortyGigabitEthernet::AnalysisModule::Monitoring : public ydk::Entity
{
    public:
        Monitoring();
        ~Monitoring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string

}; // Native::Interface::FortyGigabitEthernet::AnalysisModule::Monitoring


class Native::Interface::FortyGigabitEthernet::Cts : public ydk::Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Manual; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual
        class RoleBased; //type: Native::Interface::FortyGigabitEthernet::Cts::RoleBased

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual> manual; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::RoleBased> role_based;
        
}; // Native::Interface::FortyGigabitEthernet::Cts


class Native::Interface::FortyGigabitEthernet::Cts::Manual : public ydk::Entity
{
    public:
        Manual();
        ~Manual();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy
        class Sap; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Propagate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap> sap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Propagate> propagate;
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy : public ydk::Entity
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

        class Static; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy::Static> static_;
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf trusted; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy::Static


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap : public ydk::Entity
{
    public:
        Sap();
        ~Sap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pmk; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk

        ydk::YList pmk;
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk : public ydk::Entity
{
    public:
        Pmk();
        ~Pmk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        class ModeList; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList : public ydk::Entity
{
    public:
        ModeList();
        ~ModeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GcmEncrypt; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public ydk::Entity
{
    public:
        GcmEncrypt();
        ~GcmEncrypt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf null; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public ydk::Entity
{
    public:
        NoEncap();
        ~NoEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gcm_encrypt; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Propagate : public ydk::Entity
{
    public:
        Propagate();
        ~Propagate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: boolean

}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Propagate


class Native::Interface::FortyGigabitEthernet::Cts::RoleBased : public ydk::Entity
{
    public:
        RoleBased();
        ~RoleBased();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enforcement; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Cts::RoleBased


class Native::Interface::FortyGigabitEthernet::Udld : public ydk::Entity
{
    public:
        Udld();
        ~Udld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::FortyGigabitEthernet::Udld::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Udld::Port> port; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Udld


class Native::Interface::FortyGigabitEthernet::Udld::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aggressive; //type: empty
        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Udld::Port


class Native::Interface::FortyGigabitEthernet::Cdp : public ydk::Entity
{
    public:
        Cdp();
        ~Cdp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        class Tlv; //type: Native::Interface::FortyGigabitEthernet::Cdp::Tlv

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cdp::Tlv> tlv;
        
}; // Native::Interface::FortyGigabitEthernet::Cdp


class Native::Interface::FortyGigabitEthernet::Cdp::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_location; //type: empty
        ydk::YLeaf location; //type: empty
        class App; //type: Native::Interface::FortyGigabitEthernet::Cdp::Tlv::App

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cdp::Tlv::App> app; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Cdp::Tlv


class Native::Interface::FortyGigabitEthernet::Cdp::Tlv::App : public ydk::Entity
{
    public:
        App();
        ~App();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlvtype; //type: uint16
        ydk::YLeaf value_; //type: string

}; // Native::Interface::FortyGigabitEthernet::Cdp::Tlv::App


class Native::Interface::FortyGigabitEthernet::Mvrp : public ydk::Entity
{
    public:
        Mvrp();
        ~Mvrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mvrp; //type: empty
        class Registration; //type: Native::Interface::FortyGigabitEthernet::Mvrp::Registration
        class Timer; //type: Native::Interface::FortyGigabitEthernet::Mvrp::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mvrp::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mvrp::Timer> timer;
        
}; // Native::Interface::FortyGigabitEthernet::Mvrp


class Native::Interface::FortyGigabitEthernet::Mvrp::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fixed; //type: empty
        ydk::YLeaf forbidden; //type: empty
        ydk::YLeaf normal; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Mvrp::Registration


class Native::Interface::FortyGigabitEthernet::Mvrp::Timer : public ydk::Entity
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

        ydk::YLeaf periodic; //type: empty
        class Join; //type: Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Join
        class Leave; //type: Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Leave
        class LeaveAll; //type: Native::Interface::FortyGigabitEthernet::Mvrp::Timer::LeaveAll

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Join> join; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Leave> leave; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mvrp::Timer::LeaveAll> leave_all; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Mvrp::Timer


class Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Join : public ydk::Entity
{
    public:
        Join();
        ~Join();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Join


class Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Leave : public ydk::Entity
{
    public:
        Leave();
        ~Leave();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Leave


class Native::Interface::FortyGigabitEthernet::Mvrp::Timer::LeaveAll : public ydk::Entity
{
    public:
        LeaveAll();
        ~LeaveAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::FortyGigabitEthernet::Mvrp::Timer::LeaveAll


class Native::Interface::FortyGigabitEthernet::Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        class BroadcastOption; //type: Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption> broadcast_option;
        
}; // Native::Interface::FortyGigabitEthernet::Ntp


class Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption : public ydk::Entity
{
    public:
        BroadcastOption();
        ~BroadcastOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Broadcast; //type: Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption::Broadcast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption::Broadcast> broadcast;
        
}; // Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption


class Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption::Broadcast


class Native::Interface::FortyGigabitEthernet::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Utd


class Native::Interface::HundredGigE : public ydk::Entity
{
    public:
        HundredGigE();
        ~HundredGigE();

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
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf description; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf keepalive; //type: boolean
        ydk::YLeaf if_state; //type: IfState
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf load_interval; //type: uint16
        ydk::YLeaf max_reserved_bandwidth; //type: uint8
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf service_insertion; //type: ServiceInsertion
        ydk::YLeaf channel_protocol; //type: ChannelProtocol
        ydk::YLeaf duplex; //type: Duplex
        ydk::YLeaf cisco_ios_xe_ethernet_macsec; //type: empty
        ydk::YLeaf cisco_ios_xe_switch_macsec; //type: empty
        ydk::YLeaf nat66; //type: Nat66
        class SwitchportConf; //type: Native::Interface::HundredGigE::SwitchportConf
        class Switchport; //type: Native::Interface::HundredGigE::Switchport
        class StackwiseVirtual; //type: Native::Interface::HundredGigE::StackwiseVirtual
        class Arp; //type: Native::Interface::HundredGigE::Arp
        class Backup; //type: Native::Interface::HundredGigE::Backup
        class Cemoudp; //type: Native::Interface::HundredGigE::Cemoudp
        class CwsTunnel; //type: Native::Interface::HundredGigE::CwsTunnel
        class L2protocolTunnel; //type: Native::Interface::HundredGigE::L2protocolTunnel
        class Encapsulation; //type: Native::Interface::HundredGigE::Encapsulation
        class FairQueueConf; //type: Native::Interface::HundredGigE::FairQueueConf
        class FairQueue; //type: Native::Interface::HundredGigE::FairQueue
        class Flowcontrol; //type: Native::Interface::HundredGigE::Flowcontrol
        class Isis; //type: Native::Interface::HundredGigE::Isis
        class KeepaliveSettings; //type: Native::Interface::HundredGigE::KeepaliveSettings
        class Bfd; //type: Native::Interface::HundredGigE::Bfd
        class Bandwidth; //type: Native::Interface::HundredGigE::Bandwidth
        class Dampening; //type: Native::Interface::HundredGigE::Dampening
        class Domain; //type: Native::Interface::HundredGigE::Domain
        class HoldQueue; //type: Native::Interface::HundredGigE::HoldQueue
        class Mpls; //type: Native::Interface::HundredGigE::Mpls
        class IpVrf; //type: Native::Interface::HundredGigE::IpVrf
        class Vrf; //type: Native::Interface::HundredGigE::Vrf
        class Ip; //type: Native::Interface::HundredGigE::Ip
        class Ipv6; //type: Native::Interface::HundredGigE::Ipv6
        class Logging; //type: Native::Interface::HundredGigE::Logging
        class Mdix; //type: Native::Interface::HundredGigE::Mdix
        class Mop; //type: Native::Interface::HundredGigE::Mop
        class InterfaceQos; //type: Native::Interface::HundredGigE::InterfaceQos
        class Source; //type: Native::Interface::HundredGigE::Source
        class Standby; //type: Native::Interface::HundredGigE::Standby
        class AccessSession; //type: Native::Interface::HundredGigE::AccessSession
        class StormControl; //type: Native::Interface::HundredGigE::StormControl
        class Trust; //type: Native::Interface::HundredGigE::Trust
        class PriorityQueue; //type: Native::Interface::HundredGigE::PriorityQueue
        class RcvQueue; //type: Native::Interface::HundredGigE::RcvQueue
        class Peer; //type: Native::Interface::HundredGigE::Peer
        class PmPath; //type: Native::Interface::HundredGigE::PmPath
        class Power; //type: Native::Interface::HundredGigE::Power
        class CarrierDelay; //type: Native::Interface::HundredGigE::CarrierDelay
        class ChannelGroup; //type: Native::Interface::HundredGigE::ChannelGroup
        class Ethernet; //type: Native::Interface::HundredGigE::Ethernet
        class Eapol; //type: Native::Interface::HundredGigE::Eapol
        class Synchronous; //type: Native::Interface::HundredGigE::Synchronous
        class Speed; //type: Native::Interface::HundredGigE::Speed
        class Negotiation; //type: Native::Interface::HundredGigE::Negotiation
        class Plim; //type: Native::Interface::HundredGigE::Plim
        class Pppoe; //type: Native::Interface::HundredGigE::Pppoe
        class Service; //type: Native::Interface::HundredGigE::Service
        class CiscoIOSXEEthernetMacsecOption; //type: Native::Interface::HundredGigE::CiscoIOSXEEthernetMacsecOption
        class Snmp; //type: Native::Interface::HundredGigE::Snmp
        class Authentication; //type: Native::Interface::HundredGigE::Authentication
        class Mab; //type: Native::Interface::HundredGigE::Mab
        class EtAnalytics; //type: Native::Interface::HundredGigE::EtAnalytics
        class ServicePolicy; //type: Native::Interface::HundredGigE::ServicePolicy
        class Auto; //type: Native::Interface::HundredGigE::Auto
        class Datalink; //type: Native::Interface::HundredGigE::Datalink
        class Energywise; //type: Native::Interface::HundredGigE::Energywise
        class Location; //type: Native::Interface::HundredGigE::Location
        class Mac; //type: Native::Interface::HundredGigE::Mac
        class Macro; //type: Native::Interface::HundredGigE::Macro
        class DualActive; //type: Native::Interface::HundredGigE::DualActive
        class LoadBalancing; //type: Native::Interface::HundredGigE::LoadBalancing
        class VlanRange; //type: Native::Interface::HundredGigE::VlanRange
        class Switch; //type: Native::Interface::HundredGigE::Switch
        class SrrQueue; //type: Native::Interface::HundredGigE::SrrQueue
        class CiscoIOSXESwitchMacsecOption; //type: Native::Interface::HundredGigE::CiscoIOSXESwitchMacsecOption
        class Ospfv3; //type: Native::Interface::HundredGigE::Ospfv3
        class Performance; //type: Native::Interface::HundredGigE::Performance
        class Lisp; //type: Native::Interface::HundredGigE::Lisp
        class SpanningTree; //type: Native::Interface::HundredGigE::SpanningTree
        class Mka; //type: Native::Interface::HundredGigE::Mka
        class Umbrella; //type: Native::Interface::HundredGigE::Umbrella
        class Xconnect; //type: Native::Interface::HundredGigE::Xconnect
        class Evpn; //type: Native::Interface::HundredGigE::Evpn
        class Dot1x; //type: Native::Interface::HundredGigE::Dot1x
        class Crypto; //type: Native::Interface::HundredGigE::Crypto
        class Lldp; //type: Native::Interface::HundredGigE::Lldp
        class ZoneMember; //type: Native::Interface::HundredGigE::ZoneMember
        class Vrrp; //type: Native::Interface::HundredGigE::Vrrp
        class FabricDomain; //type: Native::Interface::HundredGigE::FabricDomain
        class AnalysisModule; //type: Native::Interface::HundredGigE::AnalysisModule
        class Cts; //type: Native::Interface::HundredGigE::Cts
        class Udld; //type: Native::Interface::HundredGigE::Udld
        class Cdp; //type: Native::Interface::HundredGigE::Cdp
        class Mvrp; //type: Native::Interface::HundredGigE::Mvrp
        class Ntp; //type: Native::Interface::HundredGigE::Ntp
        class Utd; //type: Native::Interface::HundredGigE::Utd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::SwitchportConf> switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::StackwiseVirtual> stackwise_virtual;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Backup> backup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Cemoudp> cemoudp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::CwsTunnel> cws_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::L2protocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::FairQueueConf> fair_queue_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::FairQueue> fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Domain> domain;
        ydk::YList hold_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::IpVrf> ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mdix> mdix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mop> mop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::InterfaceQos> interface_qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Standby> standby;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::AccessSession> access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Trust> trust;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::PriorityQueue> priority_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::RcvQueue> rcv_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::PmPath> pm_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Power> power;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::CarrierDelay> carrier_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::ChannelGroup> channel_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Eapol> eapol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Synchronous> synchronous;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Speed> speed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Negotiation> negotiation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Plim> plim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::CiscoIOSXEEthernetMacsecOption> cisco_ios_xe_ethernet_macsec_option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mab> mab; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::EtAnalytics> et_analytics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Auto> auto_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Datalink> datalink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Energywise> energywise; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Location> location;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Macro> macro;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::DualActive> dual_active;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::LoadBalancing> load_balancing;
        ydk::YList vlan_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switch> switch_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::SrrQueue> srr_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::CiscoIOSXESwitchMacsecOption> cisco_ios_xe_switch_macsec_option_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Performance> performance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::SpanningTree> spanning_tree;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mka> mka;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Umbrella> umbrella;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Evpn> evpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Dot1x> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Lldp> lldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::ZoneMember> zone_member;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Vrrp> vrrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::FabricDomain> fabric_domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::AnalysisModule> analysis_module;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Udld> udld;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Cdp> cdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mvrp> mvrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Ntp> ntp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Utd> utd;
                class IfState;
        class ServiceInsertion;
        class ChannelProtocol;
        class Duplex;
        class Nat66;

}; // Native::Interface::HundredGigE


class Native::Interface::HundredGigE::SwitchportConf : public ydk::Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switchport; //type: boolean

}; // Native::Interface::HundredGigE::SwitchportConf


class Native::Interface::HundredGigE::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nonegotiate; //type: empty
        ydk::YLeaf protected_; //type: empty
        ydk::YLeaf host; //type: empty
        class Access; //type: Native::Interface::HundredGigE::Switchport::Access
        class Block; //type: Native::Interface::HundredGigE::Switchport::Block
        class Mode; //type: Native::Interface::HundredGigE::Switchport::Mode
        class PortSecurity; //type: Native::Interface::HundredGigE::Switchport::PortSecurity
        class Trunk; //type: Native::Interface::HundredGigE::Switchport::Trunk
        class Voice; //type: Native::Interface::HundredGigE::Switchport::Voice
        class Priority; //type: Native::Interface::HundredGigE::Switchport::Priority
        class Autostate; //type: Native::Interface::HundredGigE::Switchport::Autostate
        class PrivateVlan; //type: Native::Interface::HundredGigE::Switchport::PrivateVlan
        class Vepa; //type: Native::Interface::HundredGigE::Switchport::Vepa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Trunk> trunk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Voice> voice;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Autostate> autostate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Vepa> vepa;
        
}; // Native::Interface::HundredGigE::Switchport


class Native::Interface::HundredGigE::Switchport::Access : public ydk::Entity
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

        class Vlan; //type: Native::Interface::HundredGigE::Switchport::Access::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Access::Vlan> vlan;
        
}; // Native::Interface::HundredGigE::Switchport::Access


class Native::Interface::HundredGigE::Switchport::Access::Vlan : public ydk::Entity
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

        ydk::YLeaf vlan; //type: one of uint16, enumeration
        ydk::YLeaf name; //type: string
        class Vlan_;

}; // Native::Interface::HundredGigE::Switchport::Access::Vlan


class Native::Interface::HundredGigE::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty

}; // Native::Interface::HundredGigE::Switchport::Block


class Native::Interface::HundredGigE::Switchport::Mode : public ydk::Entity
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

        ydk::YLeaf dynamic; //type: Dynamic
        class Access; //type: Native::Interface::HundredGigE::Switchport::Mode::Access
        class Dot1qTunnel; //type: Native::Interface::HundredGigE::Switchport::Mode::Dot1qTunnel
        class PrivateVlan; //type: Native::Interface::HundredGigE::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::HundredGigE::Switchport::Mode::Trunk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Mode::Dot1qTunnel> dot1q_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Mode::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Mode::Trunk> trunk; // presence node
                class Dynamic;

}; // Native::Interface::HundredGigE::Switchport::Mode


class Native::Interface::HundredGigE::Switchport::Mode::Access : public ydk::Entity
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


}; // Native::Interface::HundredGigE::Switchport::Mode::Access


class Native::Interface::HundredGigE::Switchport::Mode::Dot1qTunnel : public ydk::Entity
{
    public:
        Dot1qTunnel();
        ~Dot1qTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::HundredGigE::Switchport::Mode::Dot1qTunnel


class Native::Interface::HundredGigE::Switchport::Mode::PrivateVlan : public ydk::Entity
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

        ydk::YLeaf host; //type: empty
        ydk::YLeaf promiscuous; //type: empty

}; // Native::Interface::HundredGigE::Switchport::Mode::PrivateVlan


class Native::Interface::HundredGigE::Switchport::Mode::Trunk : public ydk::Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::HundredGigE::Switchport::Mode::Trunk


class Native::Interface::HundredGigE::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf violation; //type: Violation
        class Aging; //type: Native::Interface::HundredGigE::Switchport::PortSecurity::Aging
        class MacAddress; //type: Native::Interface::HundredGigE::Switchport::PortSecurity::MacAddress
        class Maximum; //type: Native::Interface::HundredGigE::Switchport::PortSecurity::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PortSecurity::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PortSecurity::Maximum> maximum;
                class Violation;

}; // Native::Interface::HundredGigE::Switchport::PortSecurity


class Native::Interface::HundredGigE::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Interface::HundredGigE::Switchport::PortSecurity::Aging

class Native::Interface::FortyGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FortyGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FortyGigabitEthernet::Ospfv3::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FortyGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FortyGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FortyGigabitEthernet::SpanningTree::Bpdufilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class Native::Interface::FortyGigabitEthernet::SpanningTree::Guard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf root;

};

class Native::Interface::FortyGigabitEthernet::SpanningTree::LinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf shared;

};

class Native::Interface::FortyGigabitEthernet::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::FortyGigabitEthernet::Xconnect::Sequence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::FortyGigabitEthernet::Dot1x::Pae : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf authenticator;
        static const ydk::Enum::YLeaf supplicant;
        static const ydk::Enum::YLeaf both;

};

class Native::Interface::FortyGigabitEthernet::Crypto::Ipsec::DfBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

};

class Native::Interface::FortyGigabitEthernet::Crypto::Ipsec::Fragmentation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf after_encryption;
        static const ydk::Enum::YLeaf before_encryption;

};

class Native::Interface::HundredGigE::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::HundredGigE::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::HundredGigE::ChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf pagp;

};

class Native::Interface::HundredGigE::Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

};

class Native::Interface::HundredGigE::Nat66 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inside;
        static const ydk::Enum::YLeaf outside;

};

class Native::Interface::HundredGigE::Switchport::Access::Vlan::Vlan_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

};

class Native::Interface::HundredGigE::Switchport::Mode::Dynamic : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf desirable;

};

class Native::Interface::HundredGigE::Switchport::PortSecurity::Violation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Interface::HundredGigE::Switchport::PortSecurity::Aging::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf inactivity;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_70_ */


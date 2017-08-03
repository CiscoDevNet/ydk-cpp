#ifndef _CISCO_IP_TAP_MIB_
#define _CISCO_IP_TAP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IP_TAP_MIB {

class CiscoIpTapMib : public ydk::Entity
{
    public:
        CiscoIpTapMib();
        ~CiscoIpTapMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Citapstreamencodepacket; //type: CiscoIpTapMib::Citapstreamencodepacket
        class Citapstreamtable; //type: CiscoIpTapMib::Citapstreamtable

        std::shared_ptr<CISCO_IP_TAP_MIB::CiscoIpTapMib::Citapstreamencodepacket> citapstreamencodepacket;
        std::shared_ptr<CISCO_IP_TAP_MIB::CiscoIpTapMib::Citapstreamtable> citapstreamtable;
        
}; // CiscoIpTapMib


class CiscoIpTapMib::Citapstreamencodepacket : public ydk::Entity
{
    public:
        Citapstreamencodepacket();
        ~Citapstreamencodepacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf citapstreamcapabilities; //type: Citapstreamcapabilities

}; // CiscoIpTapMib::Citapstreamencodepacket


class CiscoIpTapMib::Citapstreamtable : public ydk::Entity
{
    public:
        Citapstreamtable();
        ~Citapstreamtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Citapstreamentry; //type: CiscoIpTapMib::Citapstreamtable::Citapstreamentry

        std::vector<std::shared_ptr<CISCO_IP_TAP_MIB::CiscoIpTapMib::Citapstreamtable::Citapstreamentry> > citapstreamentry;
        
}; // CiscoIpTapMib::Citapstreamtable


class CiscoIpTapMib::Citapstreamtable::Citapstreamentry : public ydk::Entity
{
    public:
        Citapstreamentry();
        ~Citapstreamentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::ctap2mediationcontentid)
        ydk::YLeaf ctap2mediationcontentid;
        //type: int32 (refers to CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::ctap2streamindex)
        ydk::YLeaf ctap2streamindex;
        ydk::YLeaf citapstreaminterface; //type: int32
        ydk::YLeaf citapstreamaddrtype; //type: Inetaddresstype
        ydk::YLeaf citapstreamdestinationaddress; //type: binary
        ydk::YLeaf citapstreamdestinationlength; //type: uint32
        ydk::YLeaf citapstreamsourceaddress; //type: binary
        ydk::YLeaf citapstreamsourcelength; //type: uint32
        ydk::YLeaf citapstreamtosbyte; //type: int32
        ydk::YLeaf citapstreamtosbytemask; //type: int32
        ydk::YLeaf citapstreamflowid; //type: int32
        ydk::YLeaf citapstreamprotocol; //type: int32
        ydk::YLeaf citapstreamdestl4portmin; //type: uint16
        ydk::YLeaf citapstreamdestl4portmax; //type: uint16
        ydk::YLeaf citapstreamsourcel4portmin; //type: uint16
        ydk::YLeaf citapstreamsourcel4portmax; //type: uint16
        ydk::YLeaf citapstreamvrf; //type: string
        ydk::YLeaf citapstreamstatus; //type: Rowstatus

}; // CiscoIpTapMib::Citapstreamtable::Citapstreamentry


}
}

#endif /* _CISCO_IP_TAP_MIB_ */


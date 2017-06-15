#ifndef _CISCO_IP_TAP_MIB_
#define _CISCO_IP_TAP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IP_TAP_MIB {

class CiscoIpTapMib : public Entity
{
    public:
        CiscoIpTapMib();
        ~CiscoIpTapMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Citapstreamencodepacket; //type: CiscoIpTapMib::Citapstreamencodepacket
        class Citapstreamtable; //type: CiscoIpTapMib::Citapstreamtable

        std::shared_ptr<CISCO_IP_TAP_MIB::CiscoIpTapMib::Citapstreamencodepacket> citapstreamencodepacket_;
        std::shared_ptr<CISCO_IP_TAP_MIB::CiscoIpTapMib::Citapstreamtable> citapstreamtable_;
        
}; // CiscoIpTapMib


class CiscoIpTapMib::Citapstreamencodepacket : public Entity
{
    public:
        Citapstreamencodepacket();
        ~Citapstreamencodepacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf citapstreamcapabilities; //type: Citapstreamcapabilities

}; // CiscoIpTapMib::Citapstreamencodepacket


class CiscoIpTapMib::Citapstreamtable : public Entity
{
    public:
        Citapstreamtable();
        ~Citapstreamtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Citapstreamentry; //type: CiscoIpTapMib::Citapstreamtable::Citapstreamentry

        std::vector<std::shared_ptr<CISCO_IP_TAP_MIB::CiscoIpTapMib::Citapstreamtable::Citapstreamentry> > citapstreamentry_;
        
}; // CiscoIpTapMib::Citapstreamtable


class CiscoIpTapMib::Citapstreamtable::Citapstreamentry : public Entity
{
    public:
        Citapstreamentry();
        ~Citapstreamentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::ctap2mediationcontentid)
        YLeaf ctap2mediationcontentid;
        //type: int32 (refers to CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::ctap2streamindex)
        YLeaf ctap2streamindex;
        YLeaf citapstreaminterface; //type: int32
        YLeaf citapstreamaddrtype; //type: InetaddresstypeEnum
        YLeaf citapstreamdestinationaddress; //type: binary
        YLeaf citapstreamdestinationlength; //type: uint32
        YLeaf citapstreamsourceaddress; //type: binary
        YLeaf citapstreamsourcelength; //type: uint32
        YLeaf citapstreamtosbyte; //type: int32
        YLeaf citapstreamtosbytemask; //type: int32
        YLeaf citapstreamflowid; //type: int32
        YLeaf citapstreamprotocol; //type: int32
        YLeaf citapstreamdestl4portmin; //type: uint16
        YLeaf citapstreamdestl4portmax; //type: uint16
        YLeaf citapstreamsourcel4portmin; //type: uint16
        YLeaf citapstreamsourcel4portmax; //type: uint16
        YLeaf citapstreamvrf; //type: string
        YLeaf citapstreamstatus; //type: RowstatusEnum

}; // CiscoIpTapMib::Citapstreamtable::Citapstreamentry


}
}

#endif /* _CISCO_IP_TAP_MIB_ */


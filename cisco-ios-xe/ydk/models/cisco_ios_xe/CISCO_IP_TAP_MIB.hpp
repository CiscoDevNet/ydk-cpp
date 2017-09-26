#ifndef _CISCO_IP_TAP_MIB_
#define _CISCO_IP_TAP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IP_TAP_MIB {

class CISCOIPTAPMIB : public ydk::Entity
{
    public:
        CISCOIPTAPMIB();
        ~CISCOIPTAPMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Citapstreamencodepacket; //type: CISCOIPTAPMIB::Citapstreamencodepacket
        class Citapstreamtable; //type: CISCOIPTAPMIB::Citapstreamtable

        std::shared_ptr<cisco_ios_xe::CISCO_IP_TAP_MIB::CISCOIPTAPMIB::Citapstreamencodepacket> citapstreamencodepacket;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_TAP_MIB::CISCOIPTAPMIB::Citapstreamtable> citapstreamtable;
        
}; // CISCOIPTAPMIB


class CISCOIPTAPMIB::Citapstreamencodepacket : public ydk::Entity
{
    public:
        Citapstreamencodepacket();
        ~Citapstreamencodepacket();

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

        ydk::YLeaf citapstreamcapabilities; //type: Citapstreamcapabilities

}; // CISCOIPTAPMIB::Citapstreamencodepacket


class CISCOIPTAPMIB::Citapstreamtable : public ydk::Entity
{
    public:
        Citapstreamtable();
        ~Citapstreamtable();

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

        class Citapstreamentry; //type: CISCOIPTAPMIB::Citapstreamtable::Citapstreamentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IP_TAP_MIB::CISCOIPTAPMIB::Citapstreamtable::Citapstreamentry> > citapstreamentry;
        
}; // CISCOIPTAPMIB::Citapstreamtable


class CISCOIPTAPMIB::Citapstreamtable::Citapstreamentry : public ydk::Entity
{
    public:
        Citapstreamentry();
        ~Citapstreamentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Mediationtable::Ctap2Mediationentry::ctap2mediationcontentid)
        ydk::YLeaf ctap2mediationcontentid;
        //type: int32 (refers to cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Streamtable::Ctap2Streamentry::ctap2streamindex)
        ydk::YLeaf ctap2streamindex;
        ydk::YLeaf citapstreaminterface; //type: int32
        ydk::YLeaf citapstreamaddrtype; //type: InetAddressType
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
        ydk::YLeaf citapstreamstatus; //type: RowStatus

}; // CISCOIPTAPMIB::Citapstreamtable::Citapstreamentry


}
}

#endif /* _CISCO_IP_TAP_MIB_ */


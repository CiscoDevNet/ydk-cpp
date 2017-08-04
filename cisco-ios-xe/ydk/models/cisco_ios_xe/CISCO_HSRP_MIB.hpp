#ifndef _CISCO_HSRP_MIB_
#define _CISCO_HSRP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_HSRP_MIB {

class CiscoHsrpMib : public ydk::Entity
{
    public:
        CiscoHsrpMib();
        ~CiscoHsrpMib();

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

        class Chsrpglobalconfig; //type: CiscoHsrpMib::Chsrpglobalconfig
        class Chsrpgrptable; //type: CiscoHsrpMib::Chsrpgrptable

        std::shared_ptr<CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpglobalconfig> chsrpglobalconfig;
        std::shared_ptr<CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpgrptable> chsrpgrptable;
        
}; // CiscoHsrpMib


class CiscoHsrpMib::Chsrpglobalconfig : public ydk::Entity
{
    public:
        Chsrpglobalconfig();
        ~Chsrpglobalconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chsrpconfigtimeout; //type: uint32

}; // CiscoHsrpMib::Chsrpglobalconfig


class CiscoHsrpMib::Chsrpgrptable : public ydk::Entity
{
    public:
        Chsrpgrptable();
        ~Chsrpgrptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Chsrpgrpentry; //type: CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry

        std::vector<std::shared_ptr<CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry> > chsrpgrpentry;
        
}; // CiscoHsrpMib::Chsrpgrptable


class CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry : public ydk::Entity
{
    public:
        Chsrpgrpentry();
        ~Chsrpgrpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf chsrpgrpnumber; //type: uint32
        ydk::YLeaf chsrpgrpauth; //type: string
        ydk::YLeaf chsrpgrppriority; //type: uint32
        ydk::YLeaf chsrpgrppreempt; //type: boolean
        ydk::YLeaf chsrpgrppreemptdelay; //type: uint32
        ydk::YLeaf chsrpgrpuseconfiguredtimers; //type: boolean
        ydk::YLeaf chsrpgrpconfiguredhellotime; //type: uint32
        ydk::YLeaf chsrpgrpconfiguredholdtime; //type: uint32
        ydk::YLeaf chsrpgrplearnedhellotime; //type: uint32
        ydk::YLeaf chsrpgrplearnedholdtime; //type: uint32
        ydk::YLeaf chsrpgrpvirtualipaddr; //type: string
        ydk::YLeaf chsrpgrpuseconfigvirtualipaddr; //type: boolean
        ydk::YLeaf chsrpgrpactiverouter; //type: string
        ydk::YLeaf chsrpgrpstandbyrouter; //type: string
        ydk::YLeaf chsrpgrpstandbystate; //type: Hsrpstate
        ydk::YLeaf chsrpgrpvirtualmacaddr; //type: string
        ydk::YLeaf chsrpgrpentryrowstatus; //type: Rowstatus
        ydk::YLeaf chsrpgrpipnone; //type: boolean

}; // CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry

class Hsrpstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initial;
        static const ydk::Enum::YLeaf learn;
        static const ydk::Enum::YLeaf listen;
        static const ydk::Enum::YLeaf speak;
        static const ydk::Enum::YLeaf standby;
        static const ydk::Enum::YLeaf active;

};


}
}

#endif /* _CISCO_HSRP_MIB_ */

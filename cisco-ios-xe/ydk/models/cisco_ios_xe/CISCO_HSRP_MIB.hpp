#ifndef _CISCO_HSRP_MIB_
#define _CISCO_HSRP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_HSRP_MIB {

class CiscoHsrpMib : public Entity
{
    public:
        CiscoHsrpMib();
        ~CiscoHsrpMib();

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

        class Chsrpglobalconfig; //type: CiscoHsrpMib::Chsrpglobalconfig
        class Chsrpgrptable; //type: CiscoHsrpMib::Chsrpgrptable

        std::shared_ptr<CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpglobalconfig> chsrpglobalconfig_;
        std::shared_ptr<CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpgrptable> chsrpgrptable_;
        
}; // CiscoHsrpMib


class CiscoHsrpMib::Chsrpglobalconfig : public Entity
{
    public:
        Chsrpglobalconfig();
        ~Chsrpglobalconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf chsrpconfigtimeout; //type: uint32

}; // CiscoHsrpMib::Chsrpglobalconfig


class CiscoHsrpMib::Chsrpgrptable : public Entity
{
    public:
        Chsrpgrptable();
        ~Chsrpgrptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Chsrpgrpentry; //type: CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry

        std::vector<std::shared_ptr<CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry> > chsrpgrpentry_;
        
}; // CiscoHsrpMib::Chsrpgrptable


class CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry : public Entity
{
    public:
        Chsrpgrpentry();
        ~Chsrpgrpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf chsrpgrpnumber; //type: uint32
        YLeaf chsrpgrpauth; //type: string
        YLeaf chsrpgrppriority; //type: uint32
        YLeaf chsrpgrppreempt; //type: boolean
        YLeaf chsrpgrppreemptdelay; //type: uint32
        YLeaf chsrpgrpuseconfiguredtimers; //type: boolean
        YLeaf chsrpgrpconfiguredhellotime; //type: uint32
        YLeaf chsrpgrpconfiguredholdtime; //type: uint32
        YLeaf chsrpgrplearnedhellotime; //type: uint32
        YLeaf chsrpgrplearnedholdtime; //type: uint32
        YLeaf chsrpgrpvirtualipaddr; //type: string
        YLeaf chsrpgrpuseconfigvirtualipaddr; //type: boolean
        YLeaf chsrpgrpactiverouter; //type: string
        YLeaf chsrpgrpstandbyrouter; //type: string
        YLeaf chsrpgrpstandbystate; //type: HsrpstateEnum
        YLeaf chsrpgrpvirtualmacaddr; //type: string
        YLeaf chsrpgrpentryrowstatus; //type: RowstatusEnum
        YLeaf chsrpgrpipnone; //type: boolean

}; // CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry

class HsrpstateEnum : public Enum
{
    public:
        static const Enum::YLeaf initial;
        static const Enum::YLeaf learn;
        static const Enum::YLeaf listen;
        static const Enum::YLeaf speak;
        static const Enum::YLeaf standby;
        static const Enum::YLeaf active;

};


}
}

#endif /* _CISCO_HSRP_MIB_ */


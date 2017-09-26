#ifndef _CISCO_HSRP_MIB_
#define _CISCO_HSRP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_HSRP_MIB {

class CISCOHSRPMIB : public ydk::Entity
{
    public:
        CISCOHSRPMIB();
        ~CISCOHSRPMIB();

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

        class Chsrpglobalconfig; //type: CISCOHSRPMIB::Chsrpglobalconfig
        class Chsrpgrptable; //type: CISCOHSRPMIB::Chsrpgrptable

        std::shared_ptr<cisco_ios_xe::CISCO_HSRP_MIB::CISCOHSRPMIB::Chsrpglobalconfig> chsrpglobalconfig;
        std::shared_ptr<cisco_ios_xe::CISCO_HSRP_MIB::CISCOHSRPMIB::Chsrpgrptable> chsrpgrptable;
        
}; // CISCOHSRPMIB


class CISCOHSRPMIB::Chsrpglobalconfig : public ydk::Entity
{
    public:
        Chsrpglobalconfig();
        ~Chsrpglobalconfig();

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

        ydk::YLeaf chsrpconfigtimeout; //type: uint32

}; // CISCOHSRPMIB::Chsrpglobalconfig


class CISCOHSRPMIB::Chsrpgrptable : public ydk::Entity
{
    public:
        Chsrpgrptable();
        ~Chsrpgrptable();

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

        class Chsrpgrpentry; //type: CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_HSRP_MIB::CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry> > chsrpgrpentry;
        
}; // CISCOHSRPMIB::Chsrpgrptable


class CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry : public ydk::Entity
{
    public:
        Chsrpgrpentry();
        ~Chsrpgrpentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
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
        ydk::YLeaf chsrpgrpstandbystate; //type: HsrpState
        ydk::YLeaf chsrpgrpvirtualmacaddr; //type: string
        ydk::YLeaf chsrpgrpentryrowstatus; //type: RowStatus
        ydk::YLeaf chsrpgrpipnone; //type: boolean

}; // CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry

class HsrpState : public ydk::Enum
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


#ifndef _CISCO_HSRP_EXT_MIB_
#define _CISCO_HSRP_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_HSRP_EXT_MIB {

class CISCOHSRPEXTMIB : public ydk::Entity
{
    public:
        CISCOHSRPEXTMIB();
        ~CISCOHSRPEXTMIB();

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

        class Chsrpextiftrackedtable; //type: CISCOHSRPEXTMIB::Chsrpextiftrackedtable
        class Chsrpextsecaddrtable; //type: CISCOHSRPEXTMIB::Chsrpextsecaddrtable
        class Chsrpextifstandbytable; //type: CISCOHSRPEXTMIB::Chsrpextifstandbytable
        class Chsrpextiftable; //type: CISCOHSRPEXTMIB::Chsrpextiftable

        std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::Chsrpextiftrackedtable> chsrpextiftrackedtable;
        std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::Chsrpextsecaddrtable> chsrpextsecaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::Chsrpextifstandbytable> chsrpextifstandbytable;
        std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::Chsrpextiftable> chsrpextiftable;
        
}; // CISCOHSRPEXTMIB


class CISCOHSRPEXTMIB::Chsrpextiftrackedtable : public ydk::Entity
{
    public:
        Chsrpextiftrackedtable();
        ~Chsrpextiftrackedtable();

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

        class Chsrpextiftrackedentry; //type: CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry> > chsrpextiftrackedentry;
        
}; // CISCOHSRPEXTMIB::Chsrpextiftrackedtable


class CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry : public ydk::Entity
{
    public:
        Chsrpextiftrackedentry();
        ~Chsrpextiftrackedentry();

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
        //type: uint32 (refers to cisco_ios_xe::CISCO_HSRP_MIB::CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::chsrpgrpnumber)
        ydk::YLeaf chsrpgrpnumber;
        ydk::YLeaf chsrpextiftracked; //type: int32
        ydk::YLeaf chsrpextiftrackedpriority; //type: uint32
        ydk::YLeaf chsrpextiftrackedrowstatus; //type: RowStatus
        ydk::YLeaf chsrpextiftrackedipnone; //type: boolean

}; // CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry


class CISCOHSRPEXTMIB::Chsrpextsecaddrtable : public ydk::Entity
{
    public:
        Chsrpextsecaddrtable();
        ~Chsrpextsecaddrtable();

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

        class Chsrpextsecaddrentry; //type: CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry> > chsrpextsecaddrentry;
        
}; // CISCOHSRPEXTMIB::Chsrpextsecaddrtable


class CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry : public ydk::Entity
{
    public:
        Chsrpextsecaddrentry();
        ~Chsrpextsecaddrentry();

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
        //type: uint32 (refers to cisco_ios_xe::CISCO_HSRP_MIB::CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::chsrpgrpnumber)
        ydk::YLeaf chsrpgrpnumber;
        ydk::YLeaf chsrpextsecaddraddress; //type: string
        ydk::YLeaf chsrpextsecaddrrowstatus; //type: RowStatus

}; // CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry


class CISCOHSRPEXTMIB::Chsrpextifstandbytable : public ydk::Entity
{
    public:
        Chsrpextifstandbytable();
        ~Chsrpextifstandbytable();

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

        class Chsrpextifstandbyentry; //type: CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry> > chsrpextifstandbyentry;
        
}; // CISCOHSRPEXTMIB::Chsrpextifstandbytable


class CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry : public ydk::Entity
{
    public:
        Chsrpextifstandbyentry();
        ~Chsrpextifstandbyentry();

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
        //type: uint32 (refers to cisco_ios_xe::CISCO_HSRP_MIB::CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::chsrpgrpnumber)
        ydk::YLeaf chsrpgrpnumber;
        ydk::YLeaf chsrpextifstandbyindex; //type: uint32
        ydk::YLeaf chsrpextifstandbydestaddrtype; //type: InetAddressType
        ydk::YLeaf chsrpextifstandbydestaddr; //type: binary
        ydk::YLeaf chsrpextifstandbysourceaddrtype; //type: InetAddressType
        ydk::YLeaf chsrpextifstandbysourceaddr; //type: binary
        ydk::YLeaf chsrpextifstandbyrowstatus; //type: RowStatus

}; // CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry


class CISCOHSRPEXTMIB::Chsrpextiftable : public ydk::Entity
{
    public:
        Chsrpextiftable();
        ~Chsrpextiftable();

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

        class Chsrpextifentry; //type: CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry> > chsrpextifentry;
        
}; // CISCOHSRPEXTMIB::Chsrpextiftable


class CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry : public ydk::Entity
{
    public:
        Chsrpextifentry();
        ~Chsrpextifentry();

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
        ydk::YLeaf chsrpextifusebia; //type: boolean
        ydk::YLeaf chsrpextifrowstatus; //type: RowStatus

}; // CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry


}
}

#endif /* _CISCO_HSRP_EXT_MIB_ */


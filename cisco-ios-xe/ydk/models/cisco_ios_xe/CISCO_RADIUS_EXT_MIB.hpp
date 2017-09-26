#ifndef _CISCO_RADIUS_EXT_MIB_
#define _CISCO_RADIUS_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_RADIUS_EXT_MIB {

class CISCORADIUSEXTMIB : public ydk::Entity
{
    public:
        CISCORADIUSEXTMIB();
        ~CISCORADIUSEXTMIB();

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

        class Creclientglobal; //type: CISCORADIUSEXTMIB::Creclientglobal
        class Creclientauthentication; //type: CISCORADIUSEXTMIB::Creclientauthentication
        class Creclientaccounting; //type: CISCORADIUSEXTMIB::Creclientaccounting

        std::shared_ptr<cisco_ios_xe::CISCO_RADIUS_EXT_MIB::CISCORADIUSEXTMIB::Creclientaccounting> creclientaccounting;
        std::shared_ptr<cisco_ios_xe::CISCO_RADIUS_EXT_MIB::CISCORADIUSEXTMIB::Creclientauthentication> creclientauthentication;
        std::shared_ptr<cisco_ios_xe::CISCO_RADIUS_EXT_MIB::CISCORADIUSEXTMIB::Creclientglobal> creclientglobal;
        
}; // CISCORADIUSEXTMIB


class CISCORADIUSEXTMIB::Creclientaccounting : public ydk::Entity
{
    public:
        Creclientaccounting();
        ~Creclientaccounting();

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

        ydk::YLeaf creacctclientbadauthenticators; //type: uint32
        ydk::YLeaf creacctclientunknownresponses; //type: uint32
        ydk::YLeaf creacctclienttotalpacketswithresponses; //type: uint32
        ydk::YLeaf creacctclientbufferallocfailures; //type: uint32
        ydk::YLeaf creacctclienttotalresponses; //type: uint32
        ydk::YLeaf creacctclienttotalpacketswithoutresponses; //type: uint32
        ydk::YLeaf creacctclientaverageresponsedelay; //type: int32
        ydk::YLeaf creacctclientmaxresponsedelay; //type: int32
        ydk::YLeaf creacctclientmaxbuffersize; //type: uint32
        ydk::YLeaf creacctclienttimeouts; //type: uint32
        ydk::YLeaf creacctclientdupids; //type: uint32
        ydk::YLeaf creacctclientmalformedresponses; //type: uint32
        ydk::YLeaf creacctclientlastusedsourceid; //type: uint32

}; // CISCORADIUSEXTMIB::Creclientaccounting


class CISCORADIUSEXTMIB::Creclientauthentication : public ydk::Entity
{
    public:
        Creclientauthentication();
        ~Creclientauthentication();

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

        ydk::YLeaf creauthclientbadauthenticators; //type: uint32
        ydk::YLeaf creauthclientunknownresponses; //type: uint32
        ydk::YLeaf creauthclienttotalpacketswithresponses; //type: uint32
        ydk::YLeaf creauthclientbufferallocfailures; //type: uint32
        ydk::YLeaf creauthclienttotalresponses; //type: uint32
        ydk::YLeaf creauthclienttotalpacketswithoutresponses; //type: uint32
        ydk::YLeaf creauthclientaverageresponsedelay; //type: int32
        ydk::YLeaf creauthclientmaxresponsedelay; //type: int32
        ydk::YLeaf creauthclientmaxbuffersize; //type: uint32
        ydk::YLeaf creauthclienttimeouts; //type: uint32
        ydk::YLeaf creauthclientdupids; //type: uint32
        ydk::YLeaf creauthclientmalformedresponses; //type: uint32
        ydk::YLeaf creauthclientlastusedsourceid; //type: uint32

}; // CISCORADIUSEXTMIB::Creclientauthentication


class CISCORADIUSEXTMIB::Creclientglobal : public ydk::Entity
{
    public:
        Creclientglobal();
        ~Creclientglobal();

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

        ydk::YLeaf creclienttotalmaxinqlength; //type: uint32
        ydk::YLeaf creclienttotalmaxwaitqlength; //type: uint32
        ydk::YLeaf creclienttotalmaxdoneqlength; //type: uint32
        ydk::YLeaf creclienttotalaccessrejects; //type: uint32
        ydk::YLeaf creclienttotalaverageresponsedelay; //type: int32
        ydk::YLeaf creclientsourceportrangestart; //type: uint16
        ydk::YLeaf creclientsourceportrangeend; //type: uint16
        ydk::YLeaf creclientlastusedsourceport; //type: uint16
        ydk::YLeaf creclientlastusedsourceid; //type: uint32

}; // CISCORADIUSEXTMIB::Creclientglobal


}
}

#endif /* _CISCO_RADIUS_EXT_MIB_ */


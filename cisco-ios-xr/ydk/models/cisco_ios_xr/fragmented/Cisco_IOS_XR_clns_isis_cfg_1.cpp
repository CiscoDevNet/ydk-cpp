
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_cfg {

Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPasswords()
    :
    lsp_accept_password(this, {"level"})
{

    yang_name = "lsp-accept-passwords"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspAcceptPasswords::~LspAcceptPasswords()
{
}

bool Isis::Instances::Instance::LspAcceptPasswords::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_accept_password.len(); index++)
    {
        if(lsp_accept_password[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspAcceptPasswords::has_operation() const
{
    for (std::size_t index=0; index<lsp_accept_password.len(); index++)
    {
        if(lsp_accept_password[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspAcceptPasswords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-accept-passwords";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspAcceptPasswords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LspAcceptPasswords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-accept-password")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword>();
        ent_->parent = this;
        lsp_accept_password.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LspAcceptPasswords::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_accept_password.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::LspAcceptPasswords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspAcceptPasswords::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspAcceptPasswords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-accept-password")
        return true;
    return false;
}

Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::LspAcceptPassword()
    :
    level{YType::enumeration, "level"},
    password{YType::str, "password"}
{

    yang_name = "lsp-accept-password"; yang_parent_name = "lsp-accept-passwords"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::~LspAcceptPassword()
{
}

bool Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| password.is_set;
}

bool Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-accept-password";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "password")
        return true;
    return false;
}

Isis::Instances::Instance::LspMtus::LspMtus()
    :
    lsp_mtu(this, {"level"})
{

    yang_name = "lsp-mtus"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspMtus::~LspMtus()
{
}

bool Isis::Instances::Instance::LspMtus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_mtu.len(); index++)
    {
        if(lsp_mtu[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspMtus::has_operation() const
{
    for (std::size_t index=0; index<lsp_mtu.len(); index++)
    {
        if(lsp_mtu[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspMtus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-mtus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspMtus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LspMtus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-mtu")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::LspMtus::LspMtu>();
        ent_->parent = this;
        lsp_mtu.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LspMtus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_mtu.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::LspMtus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspMtus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspMtus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-mtu")
        return true;
    return false;
}

Isis::Instances::Instance::LspMtus::LspMtu::LspMtu()
    :
    level{YType::enumeration, "level"},
    mtu{YType::uint32, "mtu"}
{

    yang_name = "lsp-mtu"; yang_parent_name = "lsp-mtus"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspMtus::LspMtu::~LspMtu()
{
}

bool Isis::Instances::Instance::LspMtus::LspMtu::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| mtu.is_set;
}

bool Isis::Instances::Instance::LspMtus::LspMtu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Isis::Instances::Instance::LspMtus::LspMtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-mtu";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspMtus::LspMtu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LspMtus::LspMtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LspMtus::LspMtu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::LspMtus::LspMtu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspMtus::LspMtu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspMtus::LspMtu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "mtu")
        return true;
    return false;
}

Isis::Instances::Instance::SrlgTable::SrlgTable()
    :
    srlg_admin_weight_default{YType::uint32, "srlg-admin-weight-default"}
        ,
    srlg_names(std::make_shared<Isis::Instances::Instance::SrlgTable::SrlgNames>())
{
    srlg_names->parent = this;

    yang_name = "srlg-table"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::SrlgTable::~SrlgTable()
{
}

bool Isis::Instances::Instance::SrlgTable::has_data() const
{
    if (is_presence_container) return true;
    return srlg_admin_weight_default.is_set
	|| (srlg_names !=  nullptr && srlg_names->has_data());
}

bool Isis::Instances::Instance::SrlgTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_admin_weight_default.yfilter)
	|| (srlg_names !=  nullptr && srlg_names->has_operation());
}

std::string Isis::Instances::Instance::SrlgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::SrlgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_admin_weight_default.is_set || is_set(srlg_admin_weight_default.yfilter)) leaf_name_data.push_back(srlg_admin_weight_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::SrlgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-names")
    {
        if(srlg_names == nullptr)
        {
            srlg_names = std::make_shared<Isis::Instances::Instance::SrlgTable::SrlgNames>();
        }
        return srlg_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::SrlgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srlg_names != nullptr)
    {
        _children["srlg-names"] = srlg_names;
    }

    return _children;
}

void Isis::Instances::Instance::SrlgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-admin-weight-default")
    {
        srlg_admin_weight_default = value;
        srlg_admin_weight_default.value_namespace = name_space;
        srlg_admin_weight_default.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::SrlgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-admin-weight-default")
    {
        srlg_admin_weight_default.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::SrlgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-names" || name == "srlg-admin-weight-default")
        return true;
    return false;
}

Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgNames()
    :
    srlg_name(this, {"srlg_name"})
{

    yang_name = "srlg-names"; yang_parent_name = "srlg-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::SrlgTable::SrlgNames::~SrlgNames()
{
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_name.len(); index++)
    {
        if(srlg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::has_operation() const
{
    for (std::size_t index=0; index<srlg_name.len(); index++)
    {
        if(srlg_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::SrlgTable::SrlgNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::SrlgTable::SrlgNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::SrlgTable::SrlgNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-name")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName>();
        ent_->parent = this;
        srlg_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::SrlgTable::SrlgNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srlg_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::SrlgTable::SrlgNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::SrlgTable::SrlgNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-name")
        return true;
    return false;
}

Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::SrlgName()
    :
    srlg_name{YType::str, "srlg-name"},
    admin_weight{YType::uint32, "admin-weight"}
        ,
    from_tos(std::make_shared<Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos>())
{
    from_tos->parent = this;

    yang_name = "srlg-name"; yang_parent_name = "srlg-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::~SrlgName()
{
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::has_data() const
{
    if (is_presence_container) return true;
    return srlg_name.is_set
	|| admin_weight.is_set
	|| (from_tos !=  nullptr && from_tos->has_data());
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| (from_tos !=  nullptr && from_tos->has_operation());
}

std::string Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-name";
    ADD_KEY_TOKEN(srlg_name, "srlg-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "from-tos")
    {
        if(from_tos == nullptr)
        {
            from_tos = std::make_shared<Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos>();
        }
        return from_tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(from_tos != nullptr)
    {
        _children["from-tos"] = from_tos;
    }

    return _children;
}

void Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-tos" || name == "srlg-name" || name == "admin-weight")
        return true;
    return false;
}

Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTos()
    :
    from_to(this, {"local_ipv4_address", "remote_ipv4_address"})
{

    yang_name = "from-tos"; yang_parent_name = "srlg-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::~FromTos()
{
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<from_to.len(); index++)
    {
        if(from_to[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::has_operation() const
{
    for (std::size_t index=0; index<from_to.len(); index++)
    {
        if(from_to[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "from-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "from-to")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo>();
        ent_->parent = this;
        from_to.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : from_to.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-to")
        return true;
    return false;
}

Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo::FromTo()
    :
    local_ipv4_address{YType::str, "local-ipv4-address"},
    remote_ipv4_address{YType::str, "remote-ipv4-address"}
{

    yang_name = "from-to"; yang_parent_name = "from-tos"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo::~FromTo()
{
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo::has_data() const
{
    if (is_presence_container) return true;
    return local_ipv4_address.is_set
	|| remote_ipv4_address.is_set;
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ipv4_address.yfilter)
	|| ydk::is_set(remote_ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "from-to";
    ADD_KEY_TOKEN(local_ipv4_address, "local-ipv4-address");
    ADD_KEY_TOKEN(remote_ipv4_address, "remote-ipv4-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ipv4_address.is_set || is_set(local_ipv4_address.yfilter)) leaf_name_data.push_back(local_ipv4_address.get_name_leafdata());
    if (remote_ipv4_address.is_set || is_set(remote_ipv4_address.yfilter)) leaf_name_data.push_back(remote_ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address = value;
        local_ipv4_address.value_namespace = name_space;
        local_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address = value;
        remote_ipv4_address.value_namespace = name_space;
        remote_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ipv4-address" || name == "remote-ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Nsf::Nsf()
    :
    flavor{YType::enumeration, "flavor"},
    interface_timer{YType::uint32, "interface-timer"},
    max_interface_timer_expiry{YType::uint32, "max-interface-timer-expiry"},
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "nsf"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Nsf::~Nsf()
{
}

bool Isis::Instances::Instance::Nsf::has_data() const
{
    if (is_presence_container) return true;
    return flavor.is_set
	|| interface_timer.is_set
	|| max_interface_timer_expiry.is_set
	|| lifetime.is_set;
}

bool Isis::Instances::Instance::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flavor.yfilter)
	|| ydk::is_set(interface_timer.yfilter)
	|| ydk::is_set(max_interface_timer_expiry.yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string Isis::Instances::Instance::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flavor.is_set || is_set(flavor.yfilter)) leaf_name_data.push_back(flavor.get_name_leafdata());
    if (interface_timer.is_set || is_set(interface_timer.yfilter)) leaf_name_data.push_back(interface_timer.get_name_leafdata());
    if (max_interface_timer_expiry.is_set || is_set(max_interface_timer_expiry.yfilter)) leaf_name_data.push_back(max_interface_timer_expiry.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flavor")
    {
        flavor = value;
        flavor.value_namespace = name_space;
        flavor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-timer")
    {
        interface_timer = value;
        interface_timer.value_namespace = name_space;
        interface_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-interface-timer-expiry")
    {
        max_interface_timer_expiry = value;
        max_interface_timer_expiry.value_namespace = name_space;
        max_interface_timer_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flavor")
    {
        flavor.yfilter = yfilter;
    }
    if(value_path == "interface-timer")
    {
        interface_timer.yfilter = yfilter;
    }
    if(value_path == "max-interface-timer-expiry")
    {
        max_interface_timer_expiry.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flavor" || name == "interface-timer" || name == "max-interface-timer-expiry" || name == "lifetime")
        return true;
    return false;
}

Isis::Instances::Instance::LinkGroups::LinkGroups()
    :
    link_group(this, {"link_group_name"})
{

    yang_name = "link-groups"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LinkGroups::~LinkGroups()
{
}

bool Isis::Instances::Instance::LinkGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_group.len(); index++)
    {
        if(link_group[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LinkGroups::has_operation() const
{
    for (std::size_t index=0; index<link_group.len(); index++)
    {
        if(link_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LinkGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LinkGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LinkGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-group")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::LinkGroups::LinkGroup>();
        ent_->parent = this;
        link_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LinkGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::LinkGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LinkGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LinkGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-group")
        return true;
    return false;
}

Isis::Instances::Instance::LinkGroups::LinkGroup::LinkGroup()
    :
    link_group_name{YType::str, "link-group-name"},
    metric_offset{YType::uint32, "metric-offset"},
    revert_members{YType::uint32, "revert-members"},
    minimum_members{YType::uint32, "minimum-members"}
{

    yang_name = "link-group"; yang_parent_name = "link-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LinkGroups::LinkGroup::~LinkGroup()
{
}

bool Isis::Instances::Instance::LinkGroups::LinkGroup::has_data() const
{
    if (is_presence_container) return true;
    return link_group_name.is_set
	|| metric_offset.is_set
	|| revert_members.is_set
	|| minimum_members.is_set;
}

bool Isis::Instances::Instance::LinkGroups::LinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_group_name.yfilter)
	|| ydk::is_set(metric_offset.yfilter)
	|| ydk::is_set(revert_members.yfilter)
	|| ydk::is_set(minimum_members.yfilter);
}

std::string Isis::Instances::Instance::LinkGroups::LinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-group";
    ADD_KEY_TOKEN(link_group_name, "link-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LinkGroups::LinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_group_name.is_set || is_set(link_group_name.yfilter)) leaf_name_data.push_back(link_group_name.get_name_leafdata());
    if (metric_offset.is_set || is_set(metric_offset.yfilter)) leaf_name_data.push_back(metric_offset.get_name_leafdata());
    if (revert_members.is_set || is_set(revert_members.yfilter)) leaf_name_data.push_back(revert_members.get_name_leafdata());
    if (minimum_members.is_set || is_set(minimum_members.yfilter)) leaf_name_data.push_back(minimum_members.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LinkGroups::LinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LinkGroups::LinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::LinkGroups::LinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-group-name")
    {
        link_group_name = value;
        link_group_name.value_namespace = name_space;
        link_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-offset")
    {
        metric_offset = value;
        metric_offset.value_namespace = name_space;
        metric_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revert-members")
    {
        revert_members = value;
        revert_members.value_namespace = name_space;
        revert_members.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-members")
    {
        minimum_members = value;
        minimum_members.value_namespace = name_space;
        minimum_members.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LinkGroups::LinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-group-name")
    {
        link_group_name.yfilter = yfilter;
    }
    if(value_path == "metric-offset")
    {
        metric_offset.yfilter = yfilter;
    }
    if(value_path == "revert-members")
    {
        revert_members.yfilter = yfilter;
    }
    if(value_path == "minimum-members")
    {
        minimum_members.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LinkGroups::LinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-group-name" || name == "metric-offset" || name == "revert-members" || name == "minimum-members")
        return true;
    return false;
}

Isis::Instances::Instance::LspCheckIntervals::LspCheckIntervals()
    :
    lsp_check_interval(this, {"level"})
{

    yang_name = "lsp-check-intervals"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspCheckIntervals::~LspCheckIntervals()
{
}

bool Isis::Instances::Instance::LspCheckIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_check_interval.len(); index++)
    {
        if(lsp_check_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspCheckIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_check_interval.len(); index++)
    {
        if(lsp_check_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspCheckIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-check-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspCheckIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LspCheckIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-check-interval")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval>();
        ent_->parent = this;
        lsp_check_interval.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LspCheckIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_check_interval.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::LspCheckIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspCheckIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspCheckIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-check-interval")
        return true;
    return false;
}

Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::LspCheckInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "lsp-check-interval"; yang_parent_name = "lsp-check-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::~LspCheckInterval()
{
}

bool Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-check-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

Isis::Instances::Instance::LspPasswords::LspPasswords()
    :
    lsp_password(this, {"level"})
{

    yang_name = "lsp-passwords"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspPasswords::~LspPasswords()
{
}

bool Isis::Instances::Instance::LspPasswords::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_password.len(); index++)
    {
        if(lsp_password[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspPasswords::has_operation() const
{
    for (std::size_t index=0; index<lsp_password.len(); index++)
    {
        if(lsp_password[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspPasswords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-passwords";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspPasswords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LspPasswords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-password")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::LspPasswords::LspPassword>();
        ent_->parent = this;
        lsp_password.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LspPasswords::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_password.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::LspPasswords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspPasswords::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspPasswords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-password")
        return true;
    return false;
}

Isis::Instances::Instance::LspPasswords::LspPassword::LspPassword()
    :
    level{YType::enumeration, "level"},
    algorithm{YType::enumeration, "algorithm"},
    failure_mode{YType::enumeration, "failure-mode"},
    authentication_type{YType::enumeration, "authentication-type"},
    password{YType::str, "password"},
    enable_poi{YType::enumeration, "enable-poi"}
{

    yang_name = "lsp-password"; yang_parent_name = "lsp-passwords"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspPasswords::LspPassword::~LspPassword()
{
}

bool Isis::Instances::Instance::LspPasswords::LspPassword::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| algorithm.is_set
	|| failure_mode.is_set
	|| authentication_type.is_set
	|| password.is_set
	|| enable_poi.is_set;
}

bool Isis::Instances::Instance::LspPasswords::LspPassword::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(failure_mode.yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(enable_poi.yfilter);
}

std::string Isis::Instances::Instance::LspPasswords::LspPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-password";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspPasswords::LspPassword::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (failure_mode.is_set || is_set(failure_mode.yfilter)) leaf_name_data.push_back(failure_mode.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (enable_poi.is_set || is_set(enable_poi.yfilter)) leaf_name_data.push_back(enable_poi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LspPasswords::LspPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LspPasswords::LspPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::LspPasswords::LspPassword::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-mode")
    {
        failure_mode = value;
        failure_mode.value_namespace = name_space;
        failure_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-poi")
    {
        enable_poi = value;
        enable_poi.value_namespace = name_space;
        enable_poi.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspPasswords::LspPassword::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "failure-mode")
    {
        failure_mode.yfilter = yfilter;
    }
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "enable-poi")
    {
        enable_poi.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspPasswords::LspPassword::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "algorithm" || name == "failure-mode" || name == "authentication-type" || name == "password" || name == "enable-poi")
        return true;
    return false;
}

Isis::Instances::Instance::Nets::Nets()
    :
    net(this, {"net_name"})
{

    yang_name = "nets"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Nets::~Nets()
{
}

bool Isis::Instances::Instance::Nets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<net.len(); index++)
    {
        if(net[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Nets::has_operation() const
{
    for (std::size_t index=0; index<net.len(); index++)
    {
        if(net[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Nets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Nets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Nets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "net")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Nets::Net>();
        ent_->parent = this;
        net.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Nets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : net.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Nets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Nets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Nets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "net")
        return true;
    return false;
}

Isis::Instances::Instance::Nets::Net::Net()
    :
    net_name{YType::str, "net-name"}
{

    yang_name = "net"; yang_parent_name = "nets"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Nets::Net::~Net()
{
}

bool Isis::Instances::Instance::Nets::Net::has_data() const
{
    if (is_presence_container) return true;
    return net_name.is_set;
}

bool Isis::Instances::Instance::Nets::Net::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(net_name.yfilter);
}

std::string Isis::Instances::Instance::Nets::Net::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net";
    ADD_KEY_TOKEN(net_name, "net-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Nets::Net::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (net_name.is_set || is_set(net_name.yfilter)) leaf_name_data.push_back(net_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Nets::Net::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Nets::Net::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Nets::Net::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "net-name")
    {
        net_name = value;
        net_name.value_namespace = name_space;
        net_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Nets::Net::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "net-name")
    {
        net_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Nets::Net::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "net-name")
        return true;
    return false;
}

Isis::Instances::Instance::LspLifetimes::LspLifetimes()
    :
    lsp_lifetime(this, {"level"})
{

    yang_name = "lsp-lifetimes"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspLifetimes::~LspLifetimes()
{
}

bool Isis::Instances::Instance::LspLifetimes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_lifetime.len(); index++)
    {
        if(lsp_lifetime[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspLifetimes::has_operation() const
{
    for (std::size_t index=0; index<lsp_lifetime.len(); index++)
    {
        if(lsp_lifetime[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspLifetimes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-lifetimes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspLifetimes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LspLifetimes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-lifetime")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::LspLifetimes::LspLifetime>();
        ent_->parent = this;
        lsp_lifetime.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LspLifetimes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_lifetime.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::LspLifetimes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspLifetimes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspLifetimes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-lifetime")
        return true;
    return false;
}

Isis::Instances::Instance::LspLifetimes::LspLifetime::LspLifetime()
    :
    level{YType::enumeration, "level"},
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "lsp-lifetime"; yang_parent_name = "lsp-lifetimes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspLifetimes::LspLifetime::~LspLifetime()
{
}

bool Isis::Instances::Instance::LspLifetimes::LspLifetime::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| lifetime.is_set;
}

bool Isis::Instances::Instance::LspLifetimes::LspLifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string Isis::Instances::Instance::LspLifetimes::LspLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-lifetime";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspLifetimes::LspLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::LspLifetimes::LspLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::LspLifetimes::LspLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::LspLifetimes::LspLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspLifetimes::LspLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspLifetimes::LspLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "lifetime")
        return true;
    return false;
}

Isis::Instances::Instance::OverloadBits::OverloadBits()
    :
    overload_bit(this, {"level"})
{

    yang_name = "overload-bits"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::OverloadBits::~OverloadBits()
{
}

bool Isis::Instances::Instance::OverloadBits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<overload_bit.len(); index++)
    {
        if(overload_bit[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::OverloadBits::has_operation() const
{
    for (std::size_t index=0; index<overload_bit.len(); index++)
    {
        if(overload_bit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::OverloadBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::OverloadBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::OverloadBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overload-bit")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::OverloadBits::OverloadBit>();
        ent_->parent = this;
        overload_bit.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::OverloadBits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : overload_bit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::OverloadBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::OverloadBits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::OverloadBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overload-bit")
        return true;
    return false;
}

Isis::Instances::Instance::OverloadBits::OverloadBit::OverloadBit()
    :
    level{YType::enumeration, "level"},
    overload_bit_mode{YType::enumeration, "overload-bit-mode"},
    hippity_period{YType::uint32, "hippity-period"},
    external_adv_type{YType::enumeration, "external-adv-type"},
    inter_level_adv_type{YType::enumeration, "inter-level-adv-type"}
{

    yang_name = "overload-bit"; yang_parent_name = "overload-bits"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::OverloadBits::OverloadBit::~OverloadBit()
{
}

bool Isis::Instances::Instance::OverloadBits::OverloadBit::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| overload_bit_mode.is_set
	|| hippity_period.is_set
	|| external_adv_type.is_set
	|| inter_level_adv_type.is_set;
}

bool Isis::Instances::Instance::OverloadBits::OverloadBit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(overload_bit_mode.yfilter)
	|| ydk::is_set(hippity_period.yfilter)
	|| ydk::is_set(external_adv_type.yfilter)
	|| ydk::is_set(inter_level_adv_type.yfilter);
}

std::string Isis::Instances::Instance::OverloadBits::OverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-bit";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::OverloadBits::OverloadBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (overload_bit_mode.is_set || is_set(overload_bit_mode.yfilter)) leaf_name_data.push_back(overload_bit_mode.get_name_leafdata());
    if (hippity_period.is_set || is_set(hippity_period.yfilter)) leaf_name_data.push_back(hippity_period.get_name_leafdata());
    if (external_adv_type.is_set || is_set(external_adv_type.yfilter)) leaf_name_data.push_back(external_adv_type.get_name_leafdata());
    if (inter_level_adv_type.is_set || is_set(inter_level_adv_type.yfilter)) leaf_name_data.push_back(inter_level_adv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::OverloadBits::OverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::OverloadBits::OverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::OverloadBits::OverloadBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload-bit-mode")
    {
        overload_bit_mode = value;
        overload_bit_mode.value_namespace = name_space;
        overload_bit_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hippity-period")
    {
        hippity_period = value;
        hippity_period.value_namespace = name_space;
        hippity_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-adv-type")
    {
        external_adv_type = value;
        external_adv_type.value_namespace = name_space;
        external_adv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-level-adv-type")
    {
        inter_level_adv_type = value;
        inter_level_adv_type.value_namespace = name_space;
        inter_level_adv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::OverloadBits::OverloadBit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "overload-bit-mode")
    {
        overload_bit_mode.yfilter = yfilter;
    }
    if(value_path == "hippity-period")
    {
        hippity_period.yfilter = yfilter;
    }
    if(value_path == "external-adv-type")
    {
        external_adv_type.yfilter = yfilter;
    }
    if(value_path == "inter-level-adv-type")
    {
        inter_level_adv_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::OverloadBits::OverloadBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "overload-bit-mode" || name == "hippity-period" || name == "external-adv-type" || name == "inter-level-adv-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::~Interfaces()
{
}

bool Isis::Instances::Instance::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    running{YType::empty, "running"},
    circuit_type{YType::enumeration, "circuit-type"},
    point_to_point{YType::empty, "point-to-point"},
    state{YType::enumeration, "state"},
    mesh_group{YType::str, "mesh-group"},
    link_down_fast_detect{YType::empty, "link-down-fast-detect"}
        ,
    int_affinity_table(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable>())
    , lsp_retransmit_throttle_intervals(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals>())
    , lsp_retransmit_intervals(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals>())
    , bfd(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::Bfd>())
    , priorities(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::Priorities>())
    , hello_accept_passwords(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords>())
    , hello_passwords(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPasswords>())
    , hello_paddings(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPaddings>())
    , hello_multipliers(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers>())
    , lsp_fast_flood_thresholds(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds>())
    , prefix_attribute_n_flag_clears(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears>())
    , hello_intervals(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloIntervals>())
    , interface_afs(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs>())
    , csnp_intervals(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals>())
    , lsp_intervals(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspIntervals>())
{
    int_affinity_table->parent = this;
    lsp_retransmit_throttle_intervals->parent = this;
    lsp_retransmit_intervals->parent = this;
    bfd->parent = this;
    priorities->parent = this;
    hello_accept_passwords->parent = this;
    hello_passwords->parent = this;
    hello_paddings->parent = this;
    hello_multipliers->parent = this;
    lsp_fast_flood_thresholds->parent = this;
    prefix_attribute_n_flag_clears->parent = this;
    hello_intervals->parent = this;
    interface_afs->parent = this;
    csnp_intervals->parent = this;
    lsp_intervals->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::~Interface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| running.is_set
	|| circuit_type.is_set
	|| point_to_point.is_set
	|| state.is_set
	|| mesh_group.is_set
	|| link_down_fast_detect.is_set
	|| (int_affinity_table !=  nullptr && int_affinity_table->has_data())
	|| (lsp_retransmit_throttle_intervals !=  nullptr && lsp_retransmit_throttle_intervals->has_data())
	|| (lsp_retransmit_intervals !=  nullptr && lsp_retransmit_intervals->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (priorities !=  nullptr && priorities->has_data())
	|| (hello_accept_passwords !=  nullptr && hello_accept_passwords->has_data())
	|| (hello_passwords !=  nullptr && hello_passwords->has_data())
	|| (hello_paddings !=  nullptr && hello_paddings->has_data())
	|| (hello_multipliers !=  nullptr && hello_multipliers->has_data())
	|| (lsp_fast_flood_thresholds !=  nullptr && lsp_fast_flood_thresholds->has_data())
	|| (prefix_attribute_n_flag_clears !=  nullptr && prefix_attribute_n_flag_clears->has_data())
	|| (hello_intervals !=  nullptr && hello_intervals->has_data())
	|| (interface_afs !=  nullptr && interface_afs->has_data())
	|| (csnp_intervals !=  nullptr && csnp_intervals->has_data())
	|| (lsp_intervals !=  nullptr && lsp_intervals->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(circuit_type.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(link_down_fast_detect.yfilter)
	|| (int_affinity_table !=  nullptr && int_affinity_table->has_operation())
	|| (lsp_retransmit_throttle_intervals !=  nullptr && lsp_retransmit_throttle_intervals->has_operation())
	|| (lsp_retransmit_intervals !=  nullptr && lsp_retransmit_intervals->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (priorities !=  nullptr && priorities->has_operation())
	|| (hello_accept_passwords !=  nullptr && hello_accept_passwords->has_operation())
	|| (hello_passwords !=  nullptr && hello_passwords->has_operation())
	|| (hello_paddings !=  nullptr && hello_paddings->has_operation())
	|| (hello_multipliers !=  nullptr && hello_multipliers->has_operation())
	|| (lsp_fast_flood_thresholds !=  nullptr && lsp_fast_flood_thresholds->has_operation())
	|| (prefix_attribute_n_flag_clears !=  nullptr && prefix_attribute_n_flag_clears->has_operation())
	|| (hello_intervals !=  nullptr && hello_intervals->has_operation())
	|| (interface_afs !=  nullptr && interface_afs->has_operation())
	|| (csnp_intervals !=  nullptr && csnp_intervals->has_operation())
	|| (lsp_intervals !=  nullptr && lsp_intervals->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (circuit_type.is_set || is_set(circuit_type.yfilter)) leaf_name_data.push_back(circuit_type.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (link_down_fast_detect.is_set || is_set(link_down_fast_detect.yfilter)) leaf_name_data.push_back(link_down_fast_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "int-affinity-table")
    {
        if(int_affinity_table == nullptr)
        {
            int_affinity_table = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable>();
        }
        return int_affinity_table;
    }

    if(child_yang_name == "lsp-retransmit-throttle-intervals")
    {
        if(lsp_retransmit_throttle_intervals == nullptr)
        {
            lsp_retransmit_throttle_intervals = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals>();
        }
        return lsp_retransmit_throttle_intervals;
    }

    if(child_yang_name == "lsp-retransmit-intervals")
    {
        if(lsp_retransmit_intervals == nullptr)
        {
            lsp_retransmit_intervals = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals>();
        }
        return lsp_retransmit_intervals;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "priorities")
    {
        if(priorities == nullptr)
        {
            priorities = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::Priorities>();
        }
        return priorities;
    }

    if(child_yang_name == "hello-accept-passwords")
    {
        if(hello_accept_passwords == nullptr)
        {
            hello_accept_passwords = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords>();
        }
        return hello_accept_passwords;
    }

    if(child_yang_name == "hello-passwords")
    {
        if(hello_passwords == nullptr)
        {
            hello_passwords = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPasswords>();
        }
        return hello_passwords;
    }

    if(child_yang_name == "hello-paddings")
    {
        if(hello_paddings == nullptr)
        {
            hello_paddings = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPaddings>();
        }
        return hello_paddings;
    }

    if(child_yang_name == "hello-multipliers")
    {
        if(hello_multipliers == nullptr)
        {
            hello_multipliers = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers>();
        }
        return hello_multipliers;
    }

    if(child_yang_name == "lsp-fast-flood-thresholds")
    {
        if(lsp_fast_flood_thresholds == nullptr)
        {
            lsp_fast_flood_thresholds = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds>();
        }
        return lsp_fast_flood_thresholds;
    }

    if(child_yang_name == "prefix-attribute-n-flag-clears")
    {
        if(prefix_attribute_n_flag_clears == nullptr)
        {
            prefix_attribute_n_flag_clears = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears>();
        }
        return prefix_attribute_n_flag_clears;
    }

    if(child_yang_name == "hello-intervals")
    {
        if(hello_intervals == nullptr)
        {
            hello_intervals = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloIntervals>();
        }
        return hello_intervals;
    }

    if(child_yang_name == "interface-afs")
    {
        if(interface_afs == nullptr)
        {
            interface_afs = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs>();
        }
        return interface_afs;
    }

    if(child_yang_name == "csnp-intervals")
    {
        if(csnp_intervals == nullptr)
        {
            csnp_intervals = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals>();
        }
        return csnp_intervals;
    }

    if(child_yang_name == "lsp-intervals")
    {
        if(lsp_intervals == nullptr)
        {
            lsp_intervals = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspIntervals>();
        }
        return lsp_intervals;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(int_affinity_table != nullptr)
    {
        _children["int-affinity-table"] = int_affinity_table;
    }

    if(lsp_retransmit_throttle_intervals != nullptr)
    {
        _children["lsp-retransmit-throttle-intervals"] = lsp_retransmit_throttle_intervals;
    }

    if(lsp_retransmit_intervals != nullptr)
    {
        _children["lsp-retransmit-intervals"] = lsp_retransmit_intervals;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(priorities != nullptr)
    {
        _children["priorities"] = priorities;
    }

    if(hello_accept_passwords != nullptr)
    {
        _children["hello-accept-passwords"] = hello_accept_passwords;
    }

    if(hello_passwords != nullptr)
    {
        _children["hello-passwords"] = hello_passwords;
    }

    if(hello_paddings != nullptr)
    {
        _children["hello-paddings"] = hello_paddings;
    }

    if(hello_multipliers != nullptr)
    {
        _children["hello-multipliers"] = hello_multipliers;
    }

    if(lsp_fast_flood_thresholds != nullptr)
    {
        _children["lsp-fast-flood-thresholds"] = lsp_fast_flood_thresholds;
    }

    if(prefix_attribute_n_flag_clears != nullptr)
    {
        _children["prefix-attribute-n-flag-clears"] = prefix_attribute_n_flag_clears;
    }

    if(hello_intervals != nullptr)
    {
        _children["hello-intervals"] = hello_intervals;
    }

    if(interface_afs != nullptr)
    {
        _children["interface-afs"] = interface_afs;
    }

    if(csnp_intervals != nullptr)
    {
        _children["csnp-intervals"] = csnp_intervals;
    }

    if(lsp_intervals != nullptr)
    {
        _children["lsp-intervals"] = lsp_intervals;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-type")
    {
        circuit_type = value;
        circuit_type.value_namespace = name_space;
        circuit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect = value;
        link_down_fast_detect.value_namespace = name_space;
        link_down_fast_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "circuit-type")
    {
        circuit_type.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "int-affinity-table" || name == "lsp-retransmit-throttle-intervals" || name == "lsp-retransmit-intervals" || name == "bfd" || name == "priorities" || name == "hello-accept-passwords" || name == "hello-passwords" || name == "hello-paddings" || name == "hello-multipliers" || name == "lsp-fast-flood-thresholds" || name == "prefix-attribute-n-flag-clears" || name == "hello-intervals" || name == "interface-afs" || name == "csnp-intervals" || name == "lsp-intervals" || name == "interface-name" || name == "running" || name == "circuit-type" || name == "point-to-point" || name == "state" || name == "mesh-group" || name == "link-down-fast-detect")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::IntAffinityTable()
    :
    flex_algos(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos>())
{
    flex_algos->parent = this;

    yang_name = "int-affinity-table"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::~IntAffinityTable()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::has_data() const
{
    if (is_presence_container) return true;
    return (flex_algos !=  nullptr && flex_algos->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::has_operation() const
{
    return is_set(yfilter)
	|| (flex_algos !=  nullptr && flex_algos->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "int-affinity-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-algos")
    {
        if(flex_algos == nullptr)
        {
            flex_algos = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos>();
        }
        return flex_algos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flex_algos != nullptr)
    {
        _children["flex-algos"] = flex_algos;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-algos")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos::FlexAlgos()
    :
    flex_algo{YType::str, "flex-algo"}
{

    yang_name = "flex-algos"; yang_parent_name = "int-affinity-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos::~FlexAlgos()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flex_algo.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos::has_operation() const
{
    for (auto const & leaf : flex_algo.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flex_algo.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-algos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto flex_algo_name_datas = flex_algo.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flex_algo_name_datas.begin(), flex_algo_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flex-algo")
    {
        flex_algo.append(value);
    }
}

void Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flex-algo")
    {
        flex_algo.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-algo")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleIntervals()
    :
    lsp_retransmit_throttle_interval(this, {"level"})
{

    yang_name = "lsp-retransmit-throttle-intervals"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::~LspRetransmitThrottleIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_retransmit_throttle_interval.len(); index++)
    {
        if(lsp_retransmit_throttle_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_retransmit_throttle_interval.len(); index++)
    {
        if(lsp_retransmit_throttle_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-throttle-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-retransmit-throttle-interval")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval>();
        ent_->parent = this;
        lsp_retransmit_throttle_interval.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_retransmit_throttle_interval.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-retransmit-throttle-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::LspRetransmitThrottleInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "lsp-retransmit-throttle-interval"; yang_parent_name = "lsp-retransmit-throttle-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::~LspRetransmitThrottleInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-throttle-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitIntervals()
    :
    lsp_retransmit_interval(this, {"level"})
{

    yang_name = "lsp-retransmit-intervals"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::~LspRetransmitIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_retransmit_interval.len(); index++)
    {
        if(lsp_retransmit_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_retransmit_interval.len(); index++)
    {
        if(lsp_retransmit_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-retransmit-interval")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval>();
        ent_->parent = this;
        lsp_retransmit_interval.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_retransmit_interval.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-retransmit-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::LspRetransmitInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "lsp-retransmit-interval"; yang_parent_name = "lsp-retransmit-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::~LspRetransmitInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::Bfd::Bfd()
    :
    enable_ipv6{YType::boolean, "enable-ipv6"},
    enable_ipv4{YType::boolean, "enable-ipv4"},
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "bfd"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return enable_ipv6.is_set
	|| enable_ipv4.is_set
	|| interval.is_set
	|| detection_multiplier.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_ipv6.yfilter)
	|| ydk::is_set(enable_ipv4.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_ipv6.is_set || is_set(enable_ipv6.yfilter)) leaf_name_data.push_back(enable_ipv6.get_name_leafdata());
    if (enable_ipv4.is_set || is_set(enable_ipv4.yfilter)) leaf_name_data.push_back(enable_ipv4.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-ipv6")
    {
        enable_ipv6 = value;
        enable_ipv6.value_namespace = name_space;
        enable_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-ipv4")
    {
        enable_ipv4 = value;
        enable_ipv4.value_namespace = name_space;
        enable_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-ipv6")
    {
        enable_ipv6.yfilter = yfilter;
    }
    if(value_path == "enable-ipv4")
    {
        enable_ipv4.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-ipv6" || name == "enable-ipv4" || name == "interval" || name == "detection-multiplier")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::Priorities::Priorities()
    :
    priority(this, {"level"})
{

    yang_name = "priorities"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::Priorities::~Priorities()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::has_operation() const
{
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::Priorities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::Priorities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::Priorities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority>();
        ent_->parent = this;
        priority.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::Priorities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::Priorities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::Priorities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::Priority()
    :
    level{YType::enumeration, "level"},
    priority_value{YType::uint32, "priority-value"}
{

    yang_name = "priority"; yang_parent_name = "priorities"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::~Priority()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| priority_value.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(priority_value.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-value")
    {
        priority_value = value;
        priority_value.value_namespace = name_space;
        priority_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "priority-value")
    {
        priority_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "priority-value")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPasswords()
    :
    hello_accept_password(this, {"level"})
{

    yang_name = "hello-accept-passwords"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::~HelloAcceptPasswords()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_accept_password.len(); index++)
    {
        if(hello_accept_password[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::has_operation() const
{
    for (std::size_t index=0; index<hello_accept_password.len(); index++)
    {
        if(hello_accept_password[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-accept-passwords";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-accept-password")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword>();
        ent_->parent = this;
        hello_accept_password.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_accept_password.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-accept-password")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::HelloAcceptPassword()
    :
    level{YType::enumeration, "level"},
    password{YType::str, "password"}
{

    yang_name = "hello-accept-password"; yang_parent_name = "hello-accept-passwords"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::~HelloAcceptPassword()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| password.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-accept-password";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "password")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPasswords()
    :
    hello_password(this, {"level"})
{

    yang_name = "hello-passwords"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::~HelloPasswords()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_password.len(); index++)
    {
        if(hello_password[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::has_operation() const
{
    for (std::size_t index=0; index<hello_password.len(); index++)
    {
        if(hello_password[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-passwords";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-password")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword>();
        ent_->parent = this;
        hello_password.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_password.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-password")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::HelloPassword()
    :
    level{YType::enumeration, "level"},
    algorithm{YType::enumeration, "algorithm"},
    failure_mode{YType::enumeration, "failure-mode"},
    password{YType::str, "password"}
{

    yang_name = "hello-password"; yang_parent_name = "hello-passwords"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::~HelloPassword()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| algorithm.is_set
	|| failure_mode.is_set
	|| password.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(failure_mode.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-password";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (failure_mode.is_set || is_set(failure_mode.yfilter)) leaf_name_data.push_back(failure_mode.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-mode")
    {
        failure_mode = value;
        failure_mode.value_namespace = name_space;
        failure_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "failure-mode")
    {
        failure_mode.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "algorithm" || name == "failure-mode" || name == "password")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPaddings()
    :
    hello_padding(this, {"level"})
{

    yang_name = "hello-paddings"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::~HelloPaddings()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_padding.len(); index++)
    {
        if(hello_padding[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::has_operation() const
{
    for (std::size_t index=0; index<hello_padding.len(); index++)
    {
        if(hello_padding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-paddings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-padding")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding>();
        ent_->parent = this;
        hello_padding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_padding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-padding")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::HelloPadding()
    :
    level{YType::enumeration, "level"},
    padding_type{YType::enumeration, "padding-type"}
{

    yang_name = "hello-padding"; yang_parent_name = "hello-paddings"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::~HelloPadding()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| padding_type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(padding_type.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-padding";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (padding_type.is_set || is_set(padding_type.yfilter)) leaf_name_data.push_back(padding_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "padding-type")
    {
        padding_type = value;
        padding_type.value_namespace = name_space;
        padding_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "padding-type")
    {
        padding_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "padding-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultipliers()
    :
    hello_multiplier(this, {"level"})
{

    yang_name = "hello-multipliers"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::~HelloMultipliers()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_multiplier.len(); index++)
    {
        if(hello_multiplier[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::has_operation() const
{
    for (std::size_t index=0; index<hello_multiplier.len(); index++)
    {
        if(hello_multiplier[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multipliers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-multiplier")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier>();
        ent_->parent = this;
        hello_multiplier.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_multiplier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-multiplier")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::HelloMultiplier()
    :
    level{YType::enumeration, "level"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "hello-multiplier"; yang_parent_name = "hello-multipliers"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::~HelloMultiplier()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| multiplier.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multiplier";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "multiplier")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThresholds()
    :
    lsp_fast_flood_threshold(this, {"level"})
{

    yang_name = "lsp-fast-flood-thresholds"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::~LspFastFloodThresholds()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_fast_flood_threshold.len(); index++)
    {
        if(lsp_fast_flood_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::has_operation() const
{
    for (std::size_t index=0; index<lsp_fast_flood_threshold.len(); index++)
    {
        if(lsp_fast_flood_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fast-flood-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fast-flood-threshold")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold>();
        ent_->parent = this;
        lsp_fast_flood_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_fast_flood_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fast-flood-threshold")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::LspFastFloodThreshold()
    :
    level{YType::enumeration, "level"},
    count{YType::uint32, "count"}
{

    yang_name = "lsp-fast-flood-threshold"; yang_parent_name = "lsp-fast-flood-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::~LspFastFloodThreshold()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| count.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fast-flood-threshold";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "count")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClears()
    :
    prefix_attribute_n_flag_clear(this, {"level"})
{

    yang_name = "prefix-attribute-n-flag-clears"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::~PrefixAttributeNFlagClears()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_attribute_n_flag_clear.len(); index++)
    {
        if(prefix_attribute_n_flag_clear[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::has_operation() const
{
    for (std::size_t index=0; index<prefix_attribute_n_flag_clear.len(); index++)
    {
        if(prefix_attribute_n_flag_clear[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-attribute-n-flag-clears";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-attribute-n-flag-clear")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear>();
        ent_->parent = this;
        prefix_attribute_n_flag_clear.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_attribute_n_flag_clear.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-attribute-n-flag-clear")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::PrefixAttributeNFlagClear()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "prefix-attribute-n-flag-clear"; yang_parent_name = "prefix-attribute-n-flag-clears"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::~PrefixAttributeNFlagClear()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-attribute-n-flag-clear";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloIntervals()
    :
    hello_interval(this, {"level"})
{

    yang_name = "hello-intervals"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::~HelloIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_interval.len(); index++)
    {
        if(hello_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::has_operation() const
{
    for (std::size_t index=0; index<hello_interval.len(); index++)
    {
        if(hello_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval>();
        ent_->parent = this;
        hello_interval.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_interval.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::HelloInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "hello-interval"; yang_parent_name = "hello-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::~HelloInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAfs()
    :
    interface_af(this, {"af_name", "saf_name"})
{

    yang_name = "interface-afs"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::~InterfaceAfs()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_af.len(); index++)
    {
        if(interface_af[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::has_operation() const
{
    for (std::size_t index=0; index<interface_af.len(); index++)
    {
        if(interface_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-af")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf>();
        ent_->parent = this;
        interface_af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-af")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAf()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
        ,
    interface_af_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData>())
    , topology_name(this, {"topology_name"})
{
    interface_af_data->parent = this;

    yang_name = "interface-af"; yang_parent_name = "interface-afs"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::~InterfaceAf()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_name.len(); index++)
    {
        if(topology_name[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| saf_name.is_set
	|| (interface_af_data !=  nullptr && interface_af_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::has_operation() const
{
    for (std::size_t index=0; index<topology_name.len(); index++)
    {
        if(topology_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| (interface_af_data !=  nullptr && interface_af_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-af";
    ADD_KEY_TOKEN(af_name, "af-name");
    ADD_KEY_TOKEN(saf_name, "saf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-af-data")
    {
        if(interface_af_data == nullptr)
        {
            interface_af_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData>();
        }
        return interface_af_data;
    }

    if(child_yang_name == "topology-name")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName>();
        ent_->parent = this;
        topology_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_af_data != nullptr)
    {
        _children["interface-af-data"] = interface_af_data;
    }

    count_ = 0;
    for (auto ent_ : topology_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-af-data" || name == "topology-name" || name == "af-name" || name == "saf-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceAfData()
    :
    interface_af_state{YType::enumeration, "interface-af-state"},
    running{YType::empty, "running"}
        ,
    prefix_sid(nullptr) // presence node
    , interface_frr_table(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable>())
    , mpls_ldp(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp>())
    , prefix_sspfsid(nullptr) // presence node
    , algorithm_prefix_sids(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids>())
    , auto_metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics>())
    , admin_tags(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags>())
    , interface_link_group(nullptr) // presence node
    , manual_adj_sids(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids>())
    , metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics>())
    , weights(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights>())
{
    interface_frr_table->parent = this;
    mpls_ldp->parent = this;
    algorithm_prefix_sids->parent = this;
    auto_metrics->parent = this;
    admin_tags->parent = this;
    manual_adj_sids->parent = this;
    metrics->parent = this;
    weights->parent = this;

    yang_name = "interface-af-data"; yang_parent_name = "interface-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::~InterfaceAfData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::has_data() const
{
    if (is_presence_container) return true;
    return interface_af_state.is_set
	|| running.is_set
	|| (prefix_sid !=  nullptr && prefix_sid->has_data())
	|| (interface_frr_table !=  nullptr && interface_frr_table->has_data())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_data())
	|| (prefix_sspfsid !=  nullptr && prefix_sspfsid->has_data())
	|| (algorithm_prefix_sids !=  nullptr && algorithm_prefix_sids->has_data())
	|| (auto_metrics !=  nullptr && auto_metrics->has_data())
	|| (admin_tags !=  nullptr && admin_tags->has_data())
	|| (interface_link_group !=  nullptr && interface_link_group->has_data())
	|| (manual_adj_sids !=  nullptr && manual_adj_sids->has_data())
	|| (metrics !=  nullptr && metrics->has_data())
	|| (weights !=  nullptr && weights->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_af_state.yfilter)
	|| ydk::is_set(running.yfilter)
	|| (prefix_sid !=  nullptr && prefix_sid->has_operation())
	|| (interface_frr_table !=  nullptr && interface_frr_table->has_operation())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation())
	|| (prefix_sspfsid !=  nullptr && prefix_sspfsid->has_operation())
	|| (algorithm_prefix_sids !=  nullptr && algorithm_prefix_sids->has_operation())
	|| (auto_metrics !=  nullptr && auto_metrics->has_operation())
	|| (admin_tags !=  nullptr && admin_tags->has_operation())
	|| (interface_link_group !=  nullptr && interface_link_group->has_operation())
	|| (manual_adj_sids !=  nullptr && manual_adj_sids->has_operation())
	|| (metrics !=  nullptr && metrics->has_operation())
	|| (weights !=  nullptr && weights->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-af-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_af_state.is_set || is_set(interface_af_state.yfilter)) leaf_name_data.push_back(interface_af_state.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid")
    {
        if(prefix_sid == nullptr)
        {
            prefix_sid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid>();
        }
        return prefix_sid;
    }

    if(child_yang_name == "interface-frr-table")
    {
        if(interface_frr_table == nullptr)
        {
            interface_frr_table = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable>();
        }
        return interface_frr_table;
    }

    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp>();
        }
        return mpls_ldp;
    }

    if(child_yang_name == "prefix-sspfsid")
    {
        if(prefix_sspfsid == nullptr)
        {
            prefix_sspfsid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid>();
        }
        return prefix_sspfsid;
    }

    if(child_yang_name == "algorithm-prefix-sids")
    {
        if(algorithm_prefix_sids == nullptr)
        {
            algorithm_prefix_sids = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids>();
        }
        return algorithm_prefix_sids;
    }

    if(child_yang_name == "auto-metrics")
    {
        if(auto_metrics == nullptr)
        {
            auto_metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics>();
        }
        return auto_metrics;
    }

    if(child_yang_name == "admin-tags")
    {
        if(admin_tags == nullptr)
        {
            admin_tags = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags>();
        }
        return admin_tags;
    }

    if(child_yang_name == "interface-link-group")
    {
        if(interface_link_group == nullptr)
        {
            interface_link_group = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup>();
        }
        return interface_link_group;
    }

    if(child_yang_name == "manual-adj-sids")
    {
        if(manual_adj_sids == nullptr)
        {
            manual_adj_sids = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids>();
        }
        return manual_adj_sids;
    }

    if(child_yang_name == "metrics")
    {
        if(metrics == nullptr)
        {
            metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics>();
        }
        return metrics;
    }

    if(child_yang_name == "weights")
    {
        if(weights == nullptr)
        {
            weights = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights>();
        }
        return weights;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid != nullptr)
    {
        _children["prefix-sid"] = prefix_sid;
    }

    if(interface_frr_table != nullptr)
    {
        _children["interface-frr-table"] = interface_frr_table;
    }

    if(mpls_ldp != nullptr)
    {
        _children["mpls-ldp"] = mpls_ldp;
    }

    if(prefix_sspfsid != nullptr)
    {
        _children["prefix-sspfsid"] = prefix_sspfsid;
    }

    if(algorithm_prefix_sids != nullptr)
    {
        _children["algorithm-prefix-sids"] = algorithm_prefix_sids;
    }

    if(auto_metrics != nullptr)
    {
        _children["auto-metrics"] = auto_metrics;
    }

    if(admin_tags != nullptr)
    {
        _children["admin-tags"] = admin_tags;
    }

    if(interface_link_group != nullptr)
    {
        _children["interface-link-group"] = interface_link_group;
    }

    if(manual_adj_sids != nullptr)
    {
        _children["manual-adj-sids"] = manual_adj_sids;
    }

    if(metrics != nullptr)
    {
        _children["metrics"] = metrics;
    }

    if(weights != nullptr)
    {
        _children["weights"] = weights;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-af-state")
    {
        interface_af_state = value;
        interface_af_state.value_namespace = name_space;
        interface_af_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-af-state")
    {
        interface_af_state.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid" || name == "interface-frr-table" || name == "mpls-ldp" || name == "prefix-sspfsid" || name == "algorithm-prefix-sids" || name == "auto-metrics" || name == "admin-tags" || name == "interface-link-group" || name == "manual-adj-sids" || name == "metrics" || name == "weights" || name == "interface-af-state" || name == "running")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::PrefixSid()
    :
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"},
    php{YType::enumeration, "php"},
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"}
{

    yang_name = "prefix-sid"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::~PrefixSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set
	|| php.is_set
	|| explicit_null.is_set
	|| nflag_clear.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(php.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(nflag_clear.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (php.is_set || is_set(php.yfilter)) leaf_name_data.push_back(php.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.yfilter)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "php")
    {
        php = value;
        php.value_namespace = name_space;
        php.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
        nflag_clear.value_namespace = name_space;
        nflag_clear.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "php")
    {
        php.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "php" || name == "explicit-null" || name == "nflag-clear")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTable()
    :
    frrlfa_candidate_interfaces(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces>())
    , frr_remote_lfa_max_metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics>())
    , frr_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes>())
    , frr_remote_lfa_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes>())
    , interface_frr_tiebreaker_defaults(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults>())
    , frrtilfa_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes>())
    , frr_exclude_interfaces(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces>())
    , interface_frr_tiebreakers(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers>())
{
    frrlfa_candidate_interfaces->parent = this;
    frr_remote_lfa_max_metrics->parent = this;
    frr_types->parent = this;
    frr_remote_lfa_types->parent = this;
    interface_frr_tiebreaker_defaults->parent = this;
    frrtilfa_types->parent = this;
    frr_exclude_interfaces->parent = this;
    interface_frr_tiebreakers->parent = this;

    yang_name = "interface-frr-table"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::~InterfaceFrrTable()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::has_data() const
{
    if (is_presence_container) return true;
    return (frrlfa_candidate_interfaces !=  nullptr && frrlfa_candidate_interfaces->has_data())
	|| (frr_remote_lfa_max_metrics !=  nullptr && frr_remote_lfa_max_metrics->has_data())
	|| (frr_types !=  nullptr && frr_types->has_data())
	|| (frr_remote_lfa_types !=  nullptr && frr_remote_lfa_types->has_data())
	|| (interface_frr_tiebreaker_defaults !=  nullptr && interface_frr_tiebreaker_defaults->has_data())
	|| (frrtilfa_types !=  nullptr && frrtilfa_types->has_data())
	|| (frr_exclude_interfaces !=  nullptr && frr_exclude_interfaces->has_data())
	|| (interface_frr_tiebreakers !=  nullptr && interface_frr_tiebreakers->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::has_operation() const
{
    return is_set(yfilter)
	|| (frrlfa_candidate_interfaces !=  nullptr && frrlfa_candidate_interfaces->has_operation())
	|| (frr_remote_lfa_max_metrics !=  nullptr && frr_remote_lfa_max_metrics->has_operation())
	|| (frr_types !=  nullptr && frr_types->has_operation())
	|| (frr_remote_lfa_types !=  nullptr && frr_remote_lfa_types->has_operation())
	|| (interface_frr_tiebreaker_defaults !=  nullptr && interface_frr_tiebreaker_defaults->has_operation())
	|| (frrtilfa_types !=  nullptr && frrtilfa_types->has_operation())
	|| (frr_exclude_interfaces !=  nullptr && frr_exclude_interfaces->has_operation())
	|| (interface_frr_tiebreakers !=  nullptr && interface_frr_tiebreakers->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrlfa-candidate-interfaces")
    {
        if(frrlfa_candidate_interfaces == nullptr)
        {
            frrlfa_candidate_interfaces = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces>();
        }
        return frrlfa_candidate_interfaces;
    }

    if(child_yang_name == "frr-remote-lfa-max-metrics")
    {
        if(frr_remote_lfa_max_metrics == nullptr)
        {
            frr_remote_lfa_max_metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics>();
        }
        return frr_remote_lfa_max_metrics;
    }

    if(child_yang_name == "frr-types")
    {
        if(frr_types == nullptr)
        {
            frr_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes>();
        }
        return frr_types;
    }

    if(child_yang_name == "frr-remote-lfa-types")
    {
        if(frr_remote_lfa_types == nullptr)
        {
            frr_remote_lfa_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes>();
        }
        return frr_remote_lfa_types;
    }

    if(child_yang_name == "interface-frr-tiebreaker-defaults")
    {
        if(interface_frr_tiebreaker_defaults == nullptr)
        {
            interface_frr_tiebreaker_defaults = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults>();
        }
        return interface_frr_tiebreaker_defaults;
    }

    if(child_yang_name == "frrtilfa-types")
    {
        if(frrtilfa_types == nullptr)
        {
            frrtilfa_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes>();
        }
        return frrtilfa_types;
    }

    if(child_yang_name == "frr-exclude-interfaces")
    {
        if(frr_exclude_interfaces == nullptr)
        {
            frr_exclude_interfaces = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces>();
        }
        return frr_exclude_interfaces;
    }

    if(child_yang_name == "interface-frr-tiebreakers")
    {
        if(interface_frr_tiebreakers == nullptr)
        {
            interface_frr_tiebreakers = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers>();
        }
        return interface_frr_tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frrlfa_candidate_interfaces != nullptr)
    {
        _children["frrlfa-candidate-interfaces"] = frrlfa_candidate_interfaces;
    }

    if(frr_remote_lfa_max_metrics != nullptr)
    {
        _children["frr-remote-lfa-max-metrics"] = frr_remote_lfa_max_metrics;
    }

    if(frr_types != nullptr)
    {
        _children["frr-types"] = frr_types;
    }

    if(frr_remote_lfa_types != nullptr)
    {
        _children["frr-remote-lfa-types"] = frr_remote_lfa_types;
    }

    if(interface_frr_tiebreaker_defaults != nullptr)
    {
        _children["interface-frr-tiebreaker-defaults"] = interface_frr_tiebreaker_defaults;
    }

    if(frrtilfa_types != nullptr)
    {
        _children["frrtilfa-types"] = frrtilfa_types;
    }

    if(frr_exclude_interfaces != nullptr)
    {
        _children["frr-exclude-interfaces"] = frr_exclude_interfaces;
    }

    if(interface_frr_tiebreakers != nullptr)
    {
        _children["interface-frr-tiebreakers"] = interface_frr_tiebreakers;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrlfa-candidate-interfaces" || name == "frr-remote-lfa-max-metrics" || name == "frr-types" || name == "frr-remote-lfa-types" || name == "interface-frr-tiebreaker-defaults" || name == "frrtilfa-types" || name == "frr-exclude-interfaces" || name == "interface-frr-tiebreakers")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterfaces()
    :
    frrlfa_candidate_interface(this, {"interface_name", "frr_type"})
{

    yang_name = "frrlfa-candidate-interfaces"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::~FrrlfaCandidateInterfaces()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frrlfa_candidate_interface.len(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frrlfa_candidate_interface.len(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrlfa-candidate-interface")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface>();
        ent_->parent = this;
        frrlfa_candidate_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frrlfa_candidate_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrlfa-candidate-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::FrrlfaCandidateInterface()
    :
    interface_name{YType::str, "interface-name"},
    frr_type{YType::enumeration, "frr-type"},
    level{YType::uint32, "level"}
{

    yang_name = "frrlfa-candidate-interface"; yang_parent_name = "frrlfa-candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::~FrrlfaCandidateInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| frr_type.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(frr_type, "frr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "frr-type" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetrics()
    :
    frr_remote_lfa_max_metric(this, {"level"})
{

    yang_name = "frr-remote-lfa-max-metrics"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::~FrrRemoteLfaMaxMetrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_remote_lfa_max_metric.len(); index++)
    {
        if(frr_remote_lfa_max_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_max_metric.len(); index++)
    {
        if(frr_remote_lfa_max_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-max-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-remote-lfa-max-metric")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric>();
        ent_->parent = this;
        frr_remote_lfa_max_metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr_remote_lfa_max_metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-remote-lfa-max-metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::FrrRemoteLfaMaxMetric()
    :
    level{YType::enumeration, "level"},
    max_metric{YType::uint32, "max-metric"}
{

    yang_name = "frr-remote-lfa-max-metric"; yang_parent_name = "frr-remote-lfa-max-metrics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::~FrrRemoteLfaMaxMetric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| max_metric.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(max_metric.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-max-metric";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (max_metric.is_set || is_set(max_metric.yfilter)) leaf_name_data.push_back(max_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-metric")
    {
        max_metric = value;
        max_metric.value_namespace = name_space;
        max_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "max-metric")
    {
        max_metric.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "max-metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrTypes()
    :
    frr_type(this, {"level"})
{

    yang_name = "frr-types"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::~FrrTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_type.len(); index++)
    {
        if(frr_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::has_operation() const
{
    for (std::size_t index=0; index<frr_type.len(); index++)
    {
        if(frr_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-type")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType>();
        ent_->parent = this;
        frr_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::FrrType()
    :
    level{YType::enumeration, "level"},
    type{YType::enumeration, "type"}
{

    yang_name = "frr-type"; yang_parent_name = "frr-types"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::~FrrType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-type";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaTypes()
    :
    frr_remote_lfa_type(this, {"level"})
{

    yang_name = "frr-remote-lfa-types"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::~FrrRemoteLfaTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_remote_lfa_type.len(); index++)
    {
        if(frr_remote_lfa_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_type.len(); index++)
    {
        if(frr_remote_lfa_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-remote-lfa-type")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType>();
        ent_->parent = this;
        frr_remote_lfa_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr_remote_lfa_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-remote-lfa-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::FrrRemoteLfaType()
    :
    level{YType::enumeration, "level"},
    type{YType::enumeration, "type"}
{

    yang_name = "frr-remote-lfa-type"; yang_parent_name = "frr-remote-lfa-types"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::~FrrRemoteLfaType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-type";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefaults()
    :
    interface_frr_tiebreaker_default(this, {"level"})
{

    yang_name = "interface-frr-tiebreaker-defaults"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::~InterfaceFrrTiebreakerDefaults()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.len(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.len(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-defaults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-frr-tiebreaker-default")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault>();
        ent_->parent = this;
        interface_frr_tiebreaker_default.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_frr_tiebreaker_default.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-frr-tiebreaker-default")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::InterfaceFrrTiebreakerDefault()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "interface-frr-tiebreaker-default"; yang_parent_name = "interface-frr-tiebreaker-defaults"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::~InterfaceFrrTiebreakerDefault()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-default";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaTypes()
    :
    frrtilfa_type(this, {"level"})
{

    yang_name = "frrtilfa-types"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::~FrrtilfaTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frrtilfa_type.len(); index++)
    {
        if(frrtilfa_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::has_operation() const
{
    for (std::size_t index=0; index<frrtilfa_type.len(); index++)
    {
        if(frrtilfa_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrtilfa-type")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType>();
        ent_->parent = this;
        frrtilfa_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frrtilfa_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrtilfa-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::FrrtilfaType()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "frrtilfa-type"; yang_parent_name = "frrtilfa-types"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::~FrrtilfaType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-type";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterfaces()
    :
    frr_exclude_interface(this, {"interface_name", "frr_type"})
{

    yang_name = "frr-exclude-interfaces"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::~FrrExcludeInterfaces()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_exclude_interface.len(); index++)
    {
        if(frr_exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frr_exclude_interface.len(); index++)
    {
        if(frr_exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-exclude-interface")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface>();
        ent_->parent = this;
        frr_exclude_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr_exclude_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-exclude-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::FrrExcludeInterface()
    :
    interface_name{YType::str, "interface-name"},
    frr_type{YType::enumeration, "frr-type"},
    level{YType::uint32, "level"}
{

    yang_name = "frr-exclude-interface"; yang_parent_name = "frr-exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::~FrrExcludeInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| frr_type.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-exclude-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(frr_type, "frr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "frr-type" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreakers()
    :
    interface_frr_tiebreaker(this, {"level", "tiebreaker"})
{

    yang_name = "interface-frr-tiebreakers"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::~InterfaceFrrTiebreakers()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_frr_tiebreaker.len(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker.len(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-frr-tiebreaker")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker>();
        ent_->parent = this;
        interface_frr_tiebreaker.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_frr_tiebreaker.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-frr-tiebreaker")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::InterfaceFrrTiebreaker()
    :
    level{YType::enumeration, "level"},
    tiebreaker{YType::enumeration, "tiebreaker"},
    index_{YType::uint32, "index"}
{

    yang_name = "interface-frr-tiebreaker"; yang_parent_name = "interface-frr-tiebreakers"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::~InterfaceFrrTiebreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| tiebreaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(tiebreaker, "tiebreaker");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "tiebreaker" || name == "index")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::MplsLdp()
    :
    sync_level{YType::uint32, "sync-level"}
{

    yang_name = "mpls-ldp"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::~MplsLdp()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::has_data() const
{
    if (is_presence_container) return true;
    return sync_level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_level.is_set || is_set(sync_level.yfilter)) leaf_name_data.push_back(sync_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-level")
    {
        sync_level = value;
        sync_level.value_namespace = name_space;
        sync_level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-level")
    {
        sync_level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::PrefixSspfsid()
    :
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"},
    php{YType::enumeration, "php"},
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"}
{

    yang_name = "prefix-sspfsid"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::~PrefixSspfsid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set
	|| php.is_set
	|| explicit_null.is_set
	|| nflag_clear.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(php.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(nflag_clear.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sspfsid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (php.is_set || is_set(php.yfilter)) leaf_name_data.push_back(php.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.yfilter)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "php")
    {
        php = value;
        php.value_namespace = name_space;
        php.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
        nflag_clear.value_namespace = name_space;
        nflag_clear.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "php")
    {
        php.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "php" || name == "explicit-null" || name == "nflag-clear")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSids()
    :
    algorithm_prefix_sid(this, {"algo"})
{

    yang_name = "algorithm-prefix-sids"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::~AlgorithmPrefixSids()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<algorithm_prefix_sid.len(); index++)
    {
        if(algorithm_prefix_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::has_operation() const
{
    for (std::size_t index=0; index<algorithm_prefix_sid.len(); index++)
    {
        if(algorithm_prefix_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm-prefix-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm-prefix-sid")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid>();
        ent_->parent = this;
        algorithm_prefix_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : algorithm_prefix_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm-prefix-sid")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid::AlgorithmPrefixSid()
    :
    algo{YType::uint32, "algo"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"},
    php{YType::enumeration, "php"},
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"}
{

    yang_name = "algorithm-prefix-sid"; yang_parent_name = "algorithm-prefix-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid::~AlgorithmPrefixSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return algo.is_set
	|| type.is_set
	|| value_.is_set
	|| php.is_set
	|| explicit_null.is_set
	|| nflag_clear.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algo.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(php.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(nflag_clear.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm-prefix-sid";
    ADD_KEY_TOKEN(algo, "algo");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algo.is_set || is_set(algo.yfilter)) leaf_name_data.push_back(algo.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (php.is_set || is_set(php.yfilter)) leaf_name_data.push_back(php.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.yfilter)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algo")
    {
        algo = value;
        algo.value_namespace = name_space;
        algo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "php")
    {
        php = value;
        php.value_namespace = name_space;
        php.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
        nflag_clear.value_namespace = name_space;
        nflag_clear.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algo")
    {
        algo.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "php")
    {
        php.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algo" || name == "type" || name == "value" || name == "php" || name == "explicit-null" || name == "nflag-clear")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetrics()
    :
    auto_metric(this, {"level"})
{

    yang_name = "auto-metrics"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::~AutoMetrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<auto_metric.len(); index++)
    {
        if(auto_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::has_operation() const
{
    for (std::size_t index=0; index<auto_metric.len(); index++)
    {
        if(auto_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-metric")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric>();
        ent_->parent = this;
        auto_metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : auto_metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::AutoMetric()
    :
    level{YType::enumeration, "level"},
    proactive_protect{YType::uint32, "proactive-protect"}
{

    yang_name = "auto-metric"; yang_parent_name = "auto-metrics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::~AutoMetric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| proactive_protect.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(proactive_protect.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-metric";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (proactive_protect.is_set || is_set(proactive_protect.yfilter)) leaf_name_data.push_back(proactive_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-protect")
    {
        proactive_protect = value;
        proactive_protect.value_namespace = name_space;
        proactive_protect.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "proactive-protect")
    {
        proactive_protect.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "proactive-protect")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTags()
    :
    admin_tag(this, {"level"})
{

    yang_name = "admin-tags"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::~AdminTags()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<admin_tag.len(); index++)
    {
        if(admin_tag[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::has_operation() const
{
    for (std::size_t index=0; index<admin_tag.len(); index++)
    {
        if(admin_tag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-tag")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag>();
        ent_->parent = this;
        admin_tag.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : admin_tag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-tag")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::AdminTag()
    :
    level{YType::enumeration, "level"},
    admin_tag{YType::uint32, "admin-tag"}
{

    yang_name = "admin-tag"; yang_parent_name = "admin-tags"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::~AdminTag()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| admin_tag.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(admin_tag.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-tag";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (admin_tag.is_set || is_set(admin_tag.yfilter)) leaf_name_data.push_back(admin_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-tag")
    {
        admin_tag = value;
        admin_tag.value_namespace = name_space;
        admin_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "admin-tag")
    {
        admin_tag.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "admin-tag")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::InterfaceLinkGroup()
    :
    link_group{YType::str, "link-group"},
    level{YType::uint32, "level"}
{

    yang_name = "interface-link-group"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::~InterfaceLinkGroup()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::has_data() const
{
    if (is_presence_container) return true;
    return link_group.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_group.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_group.is_set || is_set(link_group.yfilter)) leaf_name_data.push_back(link_group.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-group")
    {
        link_group = value;
        link_group.value_namespace = name_space;
        link_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-group")
    {
        link_group.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-group" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSids()
    :
    manual_adj_sid(this, {"level", "sid_type", "sid"})
{

    yang_name = "manual-adj-sids"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::~ManualAdjSids()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::has_operation() const
{
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual-adj-sid")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid>();
        ent_->parent = this;
        manual_adj_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : manual_adj_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual-adj-sid")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::ManualAdjSid()
    :
    level{YType::enumeration, "level"},
    sid_type{YType::enumeration, "sid-type"},
    sid{YType::uint32, "sid"},
    protected_{YType::enumeration, "protected"}
{

    yang_name = "manual-adj-sid"; yang_parent_name = "manual-adj-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::~ManualAdjSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| sid_type.is_set
	|| sid.is_set
	|| protected_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sid";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(sid_type, "sid-type");
    ADD_KEY_TOKEN(sid, "sid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "sid-type" || name == "sid" || name == "protected")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metrics()
    :
    metric(this, {"level"})
{

    yang_name = "metrics"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::~Metrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric>();
        ent_->parent = this;
        metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::Metric()
    :
    level{YType::enumeration, "level"},
    metric{YType::str, "metric"}
{

    yang_name = "metric"; yang_parent_name = "metrics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::~Metric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| metric.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weights()
    :
    weight(this, {"level"})
{

    yang_name = "weights"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::~Weights()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<weight.len(); index++)
    {
        if(weight[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::has_operation() const
{
    for (std::size_t index=0; index<weight.len(); index++)
    {
        if(weight[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weights";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "weight")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight>();
        ent_->parent = this;
        weight.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : weight.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::Weight()
    :
    level{YType::enumeration, "level"},
    weight{YType::uint32, "weight"}
{

    yang_name = "weight"; yang_parent_name = "weights"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::~Weight()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::TopologyName()
    :
    topology_name{YType::str, "topology-name"},
    interface_af_state{YType::enumeration, "interface-af-state"},
    running{YType::empty, "running"}
        ,
    prefix_sid(nullptr) // presence node
    , interface_frr_table(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable>())
    , mpls_ldp(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp>())
    , prefix_sspfsid(nullptr) // presence node
    , algorithm_prefix_sids(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids>())
    , auto_metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics>())
    , admin_tags(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags>())
    , interface_link_group(nullptr) // presence node
    , manual_adj_sids(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids>())
    , metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics>())
    , weights(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights>())
{
    interface_frr_table->parent = this;
    mpls_ldp->parent = this;
    algorithm_prefix_sids->parent = this;
    auto_metrics->parent = this;
    admin_tags->parent = this;
    manual_adj_sids->parent = this;
    metrics->parent = this;
    weights->parent = this;

    yang_name = "topology-name"; yang_parent_name = "interface-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::~TopologyName()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::has_data() const
{
    if (is_presence_container) return true;
    return topology_name.is_set
	|| interface_af_state.is_set
	|| running.is_set
	|| (prefix_sid !=  nullptr && prefix_sid->has_data())
	|| (interface_frr_table !=  nullptr && interface_frr_table->has_data())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_data())
	|| (prefix_sspfsid !=  nullptr && prefix_sspfsid->has_data())
	|| (algorithm_prefix_sids !=  nullptr && algorithm_prefix_sids->has_data())
	|| (auto_metrics !=  nullptr && auto_metrics->has_data())
	|| (admin_tags !=  nullptr && admin_tags->has_data())
	|| (interface_link_group !=  nullptr && interface_link_group->has_data())
	|| (manual_adj_sids !=  nullptr && manual_adj_sids->has_data())
	|| (metrics !=  nullptr && metrics->has_data())
	|| (weights !=  nullptr && weights->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(interface_af_state.yfilter)
	|| ydk::is_set(running.yfilter)
	|| (prefix_sid !=  nullptr && prefix_sid->has_operation())
	|| (interface_frr_table !=  nullptr && interface_frr_table->has_operation())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation())
	|| (prefix_sspfsid !=  nullptr && prefix_sspfsid->has_operation())
	|| (algorithm_prefix_sids !=  nullptr && algorithm_prefix_sids->has_operation())
	|| (auto_metrics !=  nullptr && auto_metrics->has_operation())
	|| (admin_tags !=  nullptr && admin_tags->has_operation())
	|| (interface_link_group !=  nullptr && interface_link_group->has_operation())
	|| (manual_adj_sids !=  nullptr && manual_adj_sids->has_operation())
	|| (metrics !=  nullptr && metrics->has_operation())
	|| (weights !=  nullptr && weights->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-name";
    ADD_KEY_TOKEN(topology_name, "topology-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (interface_af_state.is_set || is_set(interface_af_state.yfilter)) leaf_name_data.push_back(interface_af_state.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid")
    {
        if(prefix_sid == nullptr)
        {
            prefix_sid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid>();
        }
        return prefix_sid;
    }

    if(child_yang_name == "interface-frr-table")
    {
        if(interface_frr_table == nullptr)
        {
            interface_frr_table = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable>();
        }
        return interface_frr_table;
    }

    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp>();
        }
        return mpls_ldp;
    }

    if(child_yang_name == "prefix-sspfsid")
    {
        if(prefix_sspfsid == nullptr)
        {
            prefix_sspfsid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid>();
        }
        return prefix_sspfsid;
    }

    if(child_yang_name == "algorithm-prefix-sids")
    {
        if(algorithm_prefix_sids == nullptr)
        {
            algorithm_prefix_sids = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids>();
        }
        return algorithm_prefix_sids;
    }

    if(child_yang_name == "auto-metrics")
    {
        if(auto_metrics == nullptr)
        {
            auto_metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics>();
        }
        return auto_metrics;
    }

    if(child_yang_name == "admin-tags")
    {
        if(admin_tags == nullptr)
        {
            admin_tags = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags>();
        }
        return admin_tags;
    }

    if(child_yang_name == "interface-link-group")
    {
        if(interface_link_group == nullptr)
        {
            interface_link_group = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup>();
        }
        return interface_link_group;
    }

    if(child_yang_name == "manual-adj-sids")
    {
        if(manual_adj_sids == nullptr)
        {
            manual_adj_sids = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids>();
        }
        return manual_adj_sids;
    }

    if(child_yang_name == "metrics")
    {
        if(metrics == nullptr)
        {
            metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics>();
        }
        return metrics;
    }

    if(child_yang_name == "weights")
    {
        if(weights == nullptr)
        {
            weights = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights>();
        }
        return weights;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid != nullptr)
    {
        _children["prefix-sid"] = prefix_sid;
    }

    if(interface_frr_table != nullptr)
    {
        _children["interface-frr-table"] = interface_frr_table;
    }

    if(mpls_ldp != nullptr)
    {
        _children["mpls-ldp"] = mpls_ldp;
    }

    if(prefix_sspfsid != nullptr)
    {
        _children["prefix-sspfsid"] = prefix_sspfsid;
    }

    if(algorithm_prefix_sids != nullptr)
    {
        _children["algorithm-prefix-sids"] = algorithm_prefix_sids;
    }

    if(auto_metrics != nullptr)
    {
        _children["auto-metrics"] = auto_metrics;
    }

    if(admin_tags != nullptr)
    {
        _children["admin-tags"] = admin_tags;
    }

    if(interface_link_group != nullptr)
    {
        _children["interface-link-group"] = interface_link_group;
    }

    if(manual_adj_sids != nullptr)
    {
        _children["manual-adj-sids"] = manual_adj_sids;
    }

    if(metrics != nullptr)
    {
        _children["metrics"] = metrics;
    }

    if(weights != nullptr)
    {
        _children["weights"] = weights;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-af-state")
    {
        interface_af_state = value;
        interface_af_state.value_namespace = name_space;
        interface_af_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "interface-af-state")
    {
        interface_af_state.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid" || name == "interface-frr-table" || name == "mpls-ldp" || name == "prefix-sspfsid" || name == "algorithm-prefix-sids" || name == "auto-metrics" || name == "admin-tags" || name == "interface-link-group" || name == "manual-adj-sids" || name == "metrics" || name == "weights" || name == "topology-name" || name == "interface-af-state" || name == "running")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::PrefixSid()
    :
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"},
    php{YType::enumeration, "php"},
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"}
{

    yang_name = "prefix-sid"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::~PrefixSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set
	|| php.is_set
	|| explicit_null.is_set
	|| nflag_clear.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(php.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(nflag_clear.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (php.is_set || is_set(php.yfilter)) leaf_name_data.push_back(php.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.yfilter)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "php")
    {
        php = value;
        php.value_namespace = name_space;
        php.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
        nflag_clear.value_namespace = name_space;
        nflag_clear.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "php")
    {
        php.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "php" || name == "explicit-null" || name == "nflag-clear")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTable()
    :
    frrlfa_candidate_interfaces(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces>())
    , frr_remote_lfa_max_metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics>())
    , frr_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes>())
    , frr_remote_lfa_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes>())
    , interface_frr_tiebreaker_defaults(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults>())
    , frrtilfa_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes>())
    , frr_exclude_interfaces(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces>())
    , interface_frr_tiebreakers(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers>())
{
    frrlfa_candidate_interfaces->parent = this;
    frr_remote_lfa_max_metrics->parent = this;
    frr_types->parent = this;
    frr_remote_lfa_types->parent = this;
    interface_frr_tiebreaker_defaults->parent = this;
    frrtilfa_types->parent = this;
    frr_exclude_interfaces->parent = this;
    interface_frr_tiebreakers->parent = this;

    yang_name = "interface-frr-table"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::~InterfaceFrrTable()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::has_data() const
{
    if (is_presence_container) return true;
    return (frrlfa_candidate_interfaces !=  nullptr && frrlfa_candidate_interfaces->has_data())
	|| (frr_remote_lfa_max_metrics !=  nullptr && frr_remote_lfa_max_metrics->has_data())
	|| (frr_types !=  nullptr && frr_types->has_data())
	|| (frr_remote_lfa_types !=  nullptr && frr_remote_lfa_types->has_data())
	|| (interface_frr_tiebreaker_defaults !=  nullptr && interface_frr_tiebreaker_defaults->has_data())
	|| (frrtilfa_types !=  nullptr && frrtilfa_types->has_data())
	|| (frr_exclude_interfaces !=  nullptr && frr_exclude_interfaces->has_data())
	|| (interface_frr_tiebreakers !=  nullptr && interface_frr_tiebreakers->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::has_operation() const
{
    return is_set(yfilter)
	|| (frrlfa_candidate_interfaces !=  nullptr && frrlfa_candidate_interfaces->has_operation())
	|| (frr_remote_lfa_max_metrics !=  nullptr && frr_remote_lfa_max_metrics->has_operation())
	|| (frr_types !=  nullptr && frr_types->has_operation())
	|| (frr_remote_lfa_types !=  nullptr && frr_remote_lfa_types->has_operation())
	|| (interface_frr_tiebreaker_defaults !=  nullptr && interface_frr_tiebreaker_defaults->has_operation())
	|| (frrtilfa_types !=  nullptr && frrtilfa_types->has_operation())
	|| (frr_exclude_interfaces !=  nullptr && frr_exclude_interfaces->has_operation())
	|| (interface_frr_tiebreakers !=  nullptr && interface_frr_tiebreakers->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrlfa-candidate-interfaces")
    {
        if(frrlfa_candidate_interfaces == nullptr)
        {
            frrlfa_candidate_interfaces = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces>();
        }
        return frrlfa_candidate_interfaces;
    }

    if(child_yang_name == "frr-remote-lfa-max-metrics")
    {
        if(frr_remote_lfa_max_metrics == nullptr)
        {
            frr_remote_lfa_max_metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics>();
        }
        return frr_remote_lfa_max_metrics;
    }

    if(child_yang_name == "frr-types")
    {
        if(frr_types == nullptr)
        {
            frr_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes>();
        }
        return frr_types;
    }

    if(child_yang_name == "frr-remote-lfa-types")
    {
        if(frr_remote_lfa_types == nullptr)
        {
            frr_remote_lfa_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes>();
        }
        return frr_remote_lfa_types;
    }

    if(child_yang_name == "interface-frr-tiebreaker-defaults")
    {
        if(interface_frr_tiebreaker_defaults == nullptr)
        {
            interface_frr_tiebreaker_defaults = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults>();
        }
        return interface_frr_tiebreaker_defaults;
    }

    if(child_yang_name == "frrtilfa-types")
    {
        if(frrtilfa_types == nullptr)
        {
            frrtilfa_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes>();
        }
        return frrtilfa_types;
    }

    if(child_yang_name == "frr-exclude-interfaces")
    {
        if(frr_exclude_interfaces == nullptr)
        {
            frr_exclude_interfaces = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces>();
        }
        return frr_exclude_interfaces;
    }

    if(child_yang_name == "interface-frr-tiebreakers")
    {
        if(interface_frr_tiebreakers == nullptr)
        {
            interface_frr_tiebreakers = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers>();
        }
        return interface_frr_tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frrlfa_candidate_interfaces != nullptr)
    {
        _children["frrlfa-candidate-interfaces"] = frrlfa_candidate_interfaces;
    }

    if(frr_remote_lfa_max_metrics != nullptr)
    {
        _children["frr-remote-lfa-max-metrics"] = frr_remote_lfa_max_metrics;
    }

    if(frr_types != nullptr)
    {
        _children["frr-types"] = frr_types;
    }

    if(frr_remote_lfa_types != nullptr)
    {
        _children["frr-remote-lfa-types"] = frr_remote_lfa_types;
    }

    if(interface_frr_tiebreaker_defaults != nullptr)
    {
        _children["interface-frr-tiebreaker-defaults"] = interface_frr_tiebreaker_defaults;
    }

    if(frrtilfa_types != nullptr)
    {
        _children["frrtilfa-types"] = frrtilfa_types;
    }

    if(frr_exclude_interfaces != nullptr)
    {
        _children["frr-exclude-interfaces"] = frr_exclude_interfaces;
    }

    if(interface_frr_tiebreakers != nullptr)
    {
        _children["interface-frr-tiebreakers"] = interface_frr_tiebreakers;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrlfa-candidate-interfaces" || name == "frr-remote-lfa-max-metrics" || name == "frr-types" || name == "frr-remote-lfa-types" || name == "interface-frr-tiebreaker-defaults" || name == "frrtilfa-types" || name == "frr-exclude-interfaces" || name == "interface-frr-tiebreakers")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterfaces()
    :
    frrlfa_candidate_interface(this, {"interface_name", "frr_type"})
{

    yang_name = "frrlfa-candidate-interfaces"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::~FrrlfaCandidateInterfaces()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frrlfa_candidate_interface.len(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frrlfa_candidate_interface.len(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrlfa-candidate-interface")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface>();
        ent_->parent = this;
        frrlfa_candidate_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frrlfa_candidate_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrlfa-candidate-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::FrrlfaCandidateInterface()
    :
    interface_name{YType::str, "interface-name"},
    frr_type{YType::enumeration, "frr-type"},
    level{YType::uint32, "level"}
{

    yang_name = "frrlfa-candidate-interface"; yang_parent_name = "frrlfa-candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::~FrrlfaCandidateInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| frr_type.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(frr_type, "frr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "frr-type" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetrics()
    :
    frr_remote_lfa_max_metric(this, {"level"})
{

    yang_name = "frr-remote-lfa-max-metrics"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::~FrrRemoteLfaMaxMetrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_remote_lfa_max_metric.len(); index++)
    {
        if(frr_remote_lfa_max_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_max_metric.len(); index++)
    {
        if(frr_remote_lfa_max_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-max-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-remote-lfa-max-metric")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric>();
        ent_->parent = this;
        frr_remote_lfa_max_metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr_remote_lfa_max_metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-remote-lfa-max-metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::FrrRemoteLfaMaxMetric()
    :
    level{YType::enumeration, "level"},
    max_metric{YType::uint32, "max-metric"}
{

    yang_name = "frr-remote-lfa-max-metric"; yang_parent_name = "frr-remote-lfa-max-metrics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::~FrrRemoteLfaMaxMetric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| max_metric.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(max_metric.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-max-metric";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (max_metric.is_set || is_set(max_metric.yfilter)) leaf_name_data.push_back(max_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-metric")
    {
        max_metric = value;
        max_metric.value_namespace = name_space;
        max_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "max-metric")
    {
        max_metric.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "max-metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrTypes()
    :
    frr_type(this, {"level"})
{

    yang_name = "frr-types"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::~FrrTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_type.len(); index++)
    {
        if(frr_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::has_operation() const
{
    for (std::size_t index=0; index<frr_type.len(); index++)
    {
        if(frr_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-type")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType>();
        ent_->parent = this;
        frr_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::FrrType()
    :
    level{YType::enumeration, "level"},
    type{YType::enumeration, "type"}
{

    yang_name = "frr-type"; yang_parent_name = "frr-types"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::~FrrType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-type";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaTypes()
    :
    frr_remote_lfa_type(this, {"level"})
{

    yang_name = "frr-remote-lfa-types"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::~FrrRemoteLfaTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_remote_lfa_type.len(); index++)
    {
        if(frr_remote_lfa_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_type.len(); index++)
    {
        if(frr_remote_lfa_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-remote-lfa-type")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType>();
        ent_->parent = this;
        frr_remote_lfa_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr_remote_lfa_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-remote-lfa-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::FrrRemoteLfaType()
    :
    level{YType::enumeration, "level"},
    type{YType::enumeration, "type"}
{

    yang_name = "frr-remote-lfa-type"; yang_parent_name = "frr-remote-lfa-types"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::~FrrRemoteLfaType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-type";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefaults()
    :
    interface_frr_tiebreaker_default(this, {"level"})
{

    yang_name = "interface-frr-tiebreaker-defaults"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::~InterfaceFrrTiebreakerDefaults()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.len(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.len(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-defaults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-frr-tiebreaker-default")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault>();
        ent_->parent = this;
        interface_frr_tiebreaker_default.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_frr_tiebreaker_default.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-frr-tiebreaker-default")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::InterfaceFrrTiebreakerDefault()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "interface-frr-tiebreaker-default"; yang_parent_name = "interface-frr-tiebreaker-defaults"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::~InterfaceFrrTiebreakerDefault()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-default";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaTypes()
    :
    frrtilfa_type(this, {"level"})
{

    yang_name = "frrtilfa-types"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::~FrrtilfaTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frrtilfa_type.len(); index++)
    {
        if(frrtilfa_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::has_operation() const
{
    for (std::size_t index=0; index<frrtilfa_type.len(); index++)
    {
        if(frrtilfa_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrtilfa-type")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType>();
        ent_->parent = this;
        frrtilfa_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frrtilfa_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrtilfa-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::FrrtilfaType()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "frrtilfa-type"; yang_parent_name = "frrtilfa-types"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::~FrrtilfaType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-type";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterfaces()
    :
    frr_exclude_interface(this, {"interface_name", "frr_type"})
{

    yang_name = "frr-exclude-interfaces"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::~FrrExcludeInterfaces()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_exclude_interface.len(); index++)
    {
        if(frr_exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frr_exclude_interface.len(); index++)
    {
        if(frr_exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-exclude-interface")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface>();
        ent_->parent = this;
        frr_exclude_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr_exclude_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-exclude-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::FrrExcludeInterface()
    :
    interface_name{YType::str, "interface-name"},
    frr_type{YType::enumeration, "frr-type"},
    level{YType::uint32, "level"}
{

    yang_name = "frr-exclude-interface"; yang_parent_name = "frr-exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::~FrrExcludeInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| frr_type.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-exclude-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(frr_type, "frr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "frr-type" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreakers()
    :
    interface_frr_tiebreaker(this, {"level", "tiebreaker"})
{

    yang_name = "interface-frr-tiebreakers"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::~InterfaceFrrTiebreakers()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_frr_tiebreaker.len(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker.len(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-frr-tiebreaker")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker>();
        ent_->parent = this;
        interface_frr_tiebreaker.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_frr_tiebreaker.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-frr-tiebreaker")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::InterfaceFrrTiebreaker()
    :
    level{YType::enumeration, "level"},
    tiebreaker{YType::enumeration, "tiebreaker"},
    index_{YType::uint32, "index"}
{

    yang_name = "interface-frr-tiebreaker"; yang_parent_name = "interface-frr-tiebreakers"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::~InterfaceFrrTiebreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| tiebreaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(tiebreaker, "tiebreaker");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "tiebreaker" || name == "index")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::MplsLdp()
    :
    sync_level{YType::uint32, "sync-level"}
{

    yang_name = "mpls-ldp"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::~MplsLdp()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::has_data() const
{
    if (is_presence_container) return true;
    return sync_level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_level.is_set || is_set(sync_level.yfilter)) leaf_name_data.push_back(sync_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-level")
    {
        sync_level = value;
        sync_level.value_namespace = name_space;
        sync_level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-level")
    {
        sync_level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::PrefixSspfsid()
    :
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"},
    php{YType::enumeration, "php"},
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"}
{

    yang_name = "prefix-sspfsid"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::~PrefixSspfsid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set
	|| php.is_set
	|| explicit_null.is_set
	|| nflag_clear.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(php.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(nflag_clear.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sspfsid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (php.is_set || is_set(php.yfilter)) leaf_name_data.push_back(php.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.yfilter)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "php")
    {
        php = value;
        php.value_namespace = name_space;
        php.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
        nflag_clear.value_namespace = name_space;
        nflag_clear.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "php")
    {
        php.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "php" || name == "explicit-null" || name == "nflag-clear")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSids()
    :
    algorithm_prefix_sid(this, {"algo"})
{

    yang_name = "algorithm-prefix-sids"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::~AlgorithmPrefixSids()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<algorithm_prefix_sid.len(); index++)
    {
        if(algorithm_prefix_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::has_operation() const
{
    for (std::size_t index=0; index<algorithm_prefix_sid.len(); index++)
    {
        if(algorithm_prefix_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm-prefix-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm-prefix-sid")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid>();
        ent_->parent = this;
        algorithm_prefix_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : algorithm_prefix_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm-prefix-sid")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid::AlgorithmPrefixSid()
    :
    algo{YType::uint32, "algo"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"},
    php{YType::enumeration, "php"},
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"}
{

    yang_name = "algorithm-prefix-sid"; yang_parent_name = "algorithm-prefix-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid::~AlgorithmPrefixSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return algo.is_set
	|| type.is_set
	|| value_.is_set
	|| php.is_set
	|| explicit_null.is_set
	|| nflag_clear.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algo.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(php.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(nflag_clear.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm-prefix-sid";
    ADD_KEY_TOKEN(algo, "algo");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algo.is_set || is_set(algo.yfilter)) leaf_name_data.push_back(algo.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (php.is_set || is_set(php.yfilter)) leaf_name_data.push_back(php.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.yfilter)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algo")
    {
        algo = value;
        algo.value_namespace = name_space;
        algo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "php")
    {
        php = value;
        php.value_namespace = name_space;
        php.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
        nflag_clear.value_namespace = name_space;
        nflag_clear.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algo")
    {
        algo.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "php")
    {
        php.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algo" || name == "type" || name == "value" || name == "php" || name == "explicit-null" || name == "nflag-clear")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetrics()
    :
    auto_metric(this, {"level"})
{

    yang_name = "auto-metrics"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::~AutoMetrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<auto_metric.len(); index++)
    {
        if(auto_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::has_operation() const
{
    for (std::size_t index=0; index<auto_metric.len(); index++)
    {
        if(auto_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-metric")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric>();
        ent_->parent = this;
        auto_metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : auto_metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::AutoMetric()
    :
    level{YType::enumeration, "level"},
    proactive_protect{YType::uint32, "proactive-protect"}
{

    yang_name = "auto-metric"; yang_parent_name = "auto-metrics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::~AutoMetric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| proactive_protect.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(proactive_protect.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-metric";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (proactive_protect.is_set || is_set(proactive_protect.yfilter)) leaf_name_data.push_back(proactive_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-protect")
    {
        proactive_protect = value;
        proactive_protect.value_namespace = name_space;
        proactive_protect.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "proactive-protect")
    {
        proactive_protect.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "proactive-protect")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTags()
    :
    admin_tag(this, {"level"})
{

    yang_name = "admin-tags"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::~AdminTags()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<admin_tag.len(); index++)
    {
        if(admin_tag[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::has_operation() const
{
    for (std::size_t index=0; index<admin_tag.len(); index++)
    {
        if(admin_tag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-tag")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag>();
        ent_->parent = this;
        admin_tag.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : admin_tag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-tag")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::AdminTag()
    :
    level{YType::enumeration, "level"},
    admin_tag{YType::uint32, "admin-tag"}
{

    yang_name = "admin-tag"; yang_parent_name = "admin-tags"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::~AdminTag()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| admin_tag.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(admin_tag.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-tag";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (admin_tag.is_set || is_set(admin_tag.yfilter)) leaf_name_data.push_back(admin_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-tag")
    {
        admin_tag = value;
        admin_tag.value_namespace = name_space;
        admin_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "admin-tag")
    {
        admin_tag.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "admin-tag")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::InterfaceLinkGroup()
    :
    link_group{YType::str, "link-group"},
    level{YType::uint32, "level"}
{

    yang_name = "interface-link-group"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::~InterfaceLinkGroup()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::has_data() const
{
    if (is_presence_container) return true;
    return link_group.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_group.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_group.is_set || is_set(link_group.yfilter)) leaf_name_data.push_back(link_group.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-group")
    {
        link_group = value;
        link_group.value_namespace = name_space;
        link_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-group")
    {
        link_group.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-group" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSids()
    :
    manual_adj_sid(this, {"level", "sid_type", "sid"})
{

    yang_name = "manual-adj-sids"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::~ManualAdjSids()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::has_operation() const
{
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual-adj-sid")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid>();
        ent_->parent = this;
        manual_adj_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : manual_adj_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual-adj-sid")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::ManualAdjSid()
    :
    level{YType::enumeration, "level"},
    sid_type{YType::enumeration, "sid-type"},
    sid{YType::uint32, "sid"},
    protected_{YType::enumeration, "protected"}
{

    yang_name = "manual-adj-sid"; yang_parent_name = "manual-adj-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::~ManualAdjSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| sid_type.is_set
	|| sid.is_set
	|| protected_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sid";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(sid_type, "sid-type");
    ADD_KEY_TOKEN(sid, "sid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "sid-type" || name == "sid" || name == "protected")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metrics()
    :
    metric(this, {"level"})
{

    yang_name = "metrics"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::~Metrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric>();
        ent_->parent = this;
        metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::Metric()
    :
    level{YType::enumeration, "level"},
    metric{YType::str, "metric"}
{

    yang_name = "metric"; yang_parent_name = "metrics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::~Metric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| metric.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weights()
    :
    weight(this, {"level"})
{

    yang_name = "weights"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::~Weights()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<weight.len(); index++)
    {
        if(weight[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::has_operation() const
{
    for (std::size_t index=0; index<weight.len(); index++)
    {
        if(weight[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weights";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "weight")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight>();
        ent_->parent = this;
        weight.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : weight.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::Weight()
    :
    level{YType::enumeration, "level"},
    weight{YType::uint32, "weight"}
{

    yang_name = "weight"; yang_parent_name = "weights"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::~Weight()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpIntervals()
    :
    csnp_interval(this, {"level"})
{

    yang_name = "csnp-intervals"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::~CsnpIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csnp_interval.len(); index++)
    {
        if(csnp_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::has_operation() const
{
    for (std::size_t index=0; index<csnp_interval.len(); index++)
    {
        if(csnp_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csnp-interval")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval>();
        ent_->parent = this;
        csnp_interval.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csnp_interval.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::CsnpInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "csnp-interval"; yang_parent_name = "csnp-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::~CsnpInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspIntervals()
    :
    lsp_interval(this, {"level"})
{

    yang_name = "lsp-intervals"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::~LspIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_interval.len(); index++)
    {
        if(lsp_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_interval.len(); index++)
    {
        if(lsp_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-interval")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval>();
        ent_->parent = this;
        lsp_interval.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_interval.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::LspIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::LspInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "lsp-interval"; yang_parent_name = "lsp-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::~LspInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

const Enum::YLeaf Isis::Instances::Instance::Interfaces::Interface::MeshGroup::blocked {0, "blocked"};

const Enum::YLeaf Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::Metric_::maximum {16777215, "maximum"};

const Enum::YLeaf Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::Metric_::maximum {16777215, "maximum"};


}
}

